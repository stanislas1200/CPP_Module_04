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