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