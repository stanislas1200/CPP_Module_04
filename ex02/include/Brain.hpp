/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:39:34 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/17 17:39:36 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "utils.hpp"
# include <string>

class Brain {
	public:
		Brain(void);
		Brain(const Brain& src);
		~Brain(void);
		Brain& operator=(const Brain& src);

		std::string getIdea(int i) const;
		void setIdea(int i, std::string s);

	private:
		std::string	ideas[100];
};

#endif