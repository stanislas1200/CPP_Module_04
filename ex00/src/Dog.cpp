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

Dog::Dog(void) : Animal() {
	std::cout << GRAY "Dog : " R BOLD "Default" GRAY " create." << std::endl;
}

Dog::Dog(const Dog& src) : Animal()  {
	std::cout << GRAY "Dog : " R BOLD << src.type << GRAY " create." << std::endl;
    type = src.type;
}

Dog::~Dog(void) {
	std::cout << RED "Dog : " R BOLD << this->type << RED " destroye." << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		type = src.type;
	return *this;
}