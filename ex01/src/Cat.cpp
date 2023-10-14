/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:22 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/14 14:33:22 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

Cat::Cat(void) : Animal("cat") {
	std::cout << GREEN "A " MAGENTA "Cat" GREEN " is born." R << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal("cat")  {
	std::cout << GREEN "A " MAGENTA "Cat" GREEN " is born." R << std::endl;
    type = src.type;
	brain = new Brain(*src.brain);
}

Cat::~Cat(void) {
	std::cout << RED "A " MAGENTA "Cat" RED " is gone." R << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

void Cat::makeSound(void)  const {
	std::cout << MAGENTA "Cat : " R BOLD "Miaou" R << std::endl;
}

void Cat::setIdea(int i, std::string s) {
	brain->setIdea(i, s);
}
std::string Cat::getIdea(int i) const {
	return brain->getIdea(i);
}