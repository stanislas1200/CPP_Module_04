/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:37:58 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/25 12:48:29 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("default"), _memory(NULL) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & src) : _name(src._name), _memory(src._memory) {
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
			
	s_memory* current = _memory;
	
	while (current != NULL) {
		s_memory* nextMemory = current->next;
		delete current->materia;
		delete current;
		current = nextMemory;
	}
	_memory = NULL;
}

Character & Character::operator=(Character const & src) {
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &src) {
		_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				this->equip(src._inventory[i]->clone());
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::Character(std::string const & name) : _name(name), _memory(NULL) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if (!m)
	{
		std::cout << GRAY "No materia to equip" R << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			std::cout << "Equipped " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	std::cout << GRAY "Inventory full" R << std::endl;
}

void push(s_memory** head, AMateria* node_data)
{
   s_memory* newNode = new s_memory;

   newNode->materia = node_data;
   newNode->next = (*head);
   (*head) = newNode;
}

void Character::unequip(int idx) { 
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		push(&_memory, _inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		std::cout << MAGENTA "* " <<  _name << R " ";
		_inventory[idx]->use(target);
	}
	else
		std::cout << GRAY "No materia at this index" R << std::endl;
}