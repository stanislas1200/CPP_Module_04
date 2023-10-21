/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:19 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/21 16:00:36 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

typedef struct s_memory {
	AMateria* materia;
	struct s_memory* next;
} t_memory;

class Character : public ICharacter {
	private:
		AMateria* _inventory[4];
		std::string _name;
		t_memory* _memory;
	public:
		Character();
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & src);

		Character(std::string const & name);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif