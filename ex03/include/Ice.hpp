/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:26 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:38:28 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();
		Ice & operator=(Ice const & src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif