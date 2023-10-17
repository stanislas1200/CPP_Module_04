/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:39:24 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:39:25 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("None") {
	std::cout << GRAY "WrongAnimal : " R BOLD "None" GRAY " create." R << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << GRAY "WrongAnimal : " R BOLD << type << GRAY " create." R << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type)  {
	std::cout << GRAY "WrongAnimal : " R BOLD << src.type << GRAY " create." R << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << RED "WrongAnimal : " R BOLD << this->type << RED " destroye." R << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << GREEN "sound" R << std::endl; 
}

std::string WrongAnimal::getType(void)  const {
	return type;
}