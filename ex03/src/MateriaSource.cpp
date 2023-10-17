/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:13 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:38:14 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			std::cout << "Learned " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	std::cout << GRAY "Source full" R << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			std::cout << "Created " << type << std::endl;
			return (_inventory[i]->clone());
		}
	std::cout << GRAY "Unknown type" R << std::endl;
	return (NULL);
}