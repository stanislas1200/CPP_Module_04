/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:37 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:38:39 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif