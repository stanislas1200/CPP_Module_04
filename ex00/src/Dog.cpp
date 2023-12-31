/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:26:55 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/12 15:27:02 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../include/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << GREEN "A " CYAN "Dog" GREEN " is born." R << std::endl;
}

Dog::Dog(const Dog& src) : Animal("Dog")  {
	std::cout << GREEN "A " CYAN "Dog" GREEN " is born." R << std::endl;
    type = src.type;
}

Dog::~Dog(void) {
	std::cout << RED "A " CYAN "dog" RED " is gone." R << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << CYAN "Dog : " R BOLD "Wouf wouf" R << std::endl;
}