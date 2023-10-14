/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:39:38 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/12 15:22:02 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) : type("None") {
	std::cout << GRAY "Animal : " R BOLD "None" GRAY " create." R << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << GRAY "Animal : " R BOLD << type << GRAY " create." R << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type)  {
	std::cout << GRAY "Animal : " R BOLD << src.type << GRAY " create." R << std::endl;
}

Animal::~Animal(void) {
	std::cout << RED "Animal : " R BOLD << this->type << RED " destroye." R << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << GREEN "sound" R << std::endl; 
}

std::string Animal::getType(void)  const {
	return type;
}