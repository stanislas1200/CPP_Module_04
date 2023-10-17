/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:26:55 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:39:17 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << GREEN "A " CYAN "Dog" GREEN " is born." R << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal("Dog")  {
	std::cout << GREEN "A " CYAN "Dog" GREEN " is born." R << std::endl;
    type = src.type;
	brain = new Brain(*src.brain);
}

Dog::~Dog(void) {
	std::cout << RED "A " CYAN "dog" RED " is gone." R << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << CYAN "Dog : " R BOLD "Wouf wouf" R << std::endl;
}

void Dog::setIdea(int i, std::string s) {
	brain->setIdea(i, s);
}
std::string Dog::getIdea(int i) const {
	return brain->getIdea(i);
}