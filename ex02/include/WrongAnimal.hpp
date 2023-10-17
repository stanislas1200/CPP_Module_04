/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:39:45 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:39:47 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "utils.hpp"

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& src);
		
		WrongAnimal(std::string type);
		
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif