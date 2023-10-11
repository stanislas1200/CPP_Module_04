/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:39:38 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/11 17:41:26 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) {
	std::cout << GRAY "Animal : " R BOLD "Default" GRAY " create." << std::endl;
}

Animal::Animal(std::string name) {
	std::cout << GRAY "Animal : " R BOLD << name << GRAY " create." << std::endl;
}

Animal::Animal(const Animal& src) : Name(src.Name), hp(src.hp), energy(src.energy), damage(src.damage) {
	std::cout << GRAY "Animal : " R BOLD << src.Name << GRAY " create." << std::endl;
}

Animal::~Animal(void) {
	std::cout << RED "Animal : " R BOLD << this->Name << RED " destroye." << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
	{
		Name = src.Name;
		hp = src.hp;
		energy = src.energy;
		damage = src.damage;   
	}
	return *this;
}
