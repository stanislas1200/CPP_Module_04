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

# define R			"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[1;31m"
# define YELLOW		"\x1b[1;33m"
# define CYAN		"\x1b[1;36m"
# define MAGENTA	"\x1b[1;35m"
# define GRAY		"\x1b[1;90m"
# define GREEN		"\x1b[1;32m"

# include <iostream>

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