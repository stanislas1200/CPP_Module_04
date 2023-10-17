/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:23 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:38:24 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();
		Cure & operator=(Cure const & src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif