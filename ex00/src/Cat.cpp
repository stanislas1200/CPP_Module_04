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

Cat::Cat(void) : Animal("cat") {
	std::cout << GREEN "A " MAGENTA "Cat" GREEN " is born." R << std::endl;
}

Cat::Cat(const Cat& src) : Animal("cat")  {
	std::cout << GREEN "A " MAGENTA "Cat" GREEN " is born." R << std::endl;
    type = src.type;
}

Cat::~Cat(void) {
	std::cout << RED "A " MAGENTA "Cat" RED " is gone." R << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void Cat::makeSound(void)  const {
	std::cout << MAGENTA "Cat : " R BOLD "Miaou" R << std::endl;
}
