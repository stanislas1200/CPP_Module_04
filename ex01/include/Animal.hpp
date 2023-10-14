/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:29:48 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/12 15:22:35 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "utils.hpp"

class Animal {
	public:
		Animal(void);
		Animal(const Animal& src);
		virtual ~Animal(void);
		Animal& operator=(const Animal& src);
		
		Animal(std::string type);

		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif