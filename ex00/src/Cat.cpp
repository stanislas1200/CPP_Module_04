/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:22 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/12 15:58:32 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << GRAY "Cat : " R BOLD "Default" GRAY " create." << std::endl;
}

Cat::Cat(const Cat& src) : Animal()  {
	std::cout << GRAY "Cat : " R BOLD << src.type << GRAY " create." << std::endl;
    type = src.type;
}

Cat::~Cat(void) {
	std::cout << RED "Cat : " R BOLD << this->type << RED " destroye." << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void Animal::makeSound(void) {
	std::cout << GREEN "sound" R << std::endl; 
}
