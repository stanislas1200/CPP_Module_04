#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define R			"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[1;31m"
# define YELLOW		"\x1b[1;33m"
# define CYAN		"\x1b[1;36m"
# define MAGENTA	"\x1b[1;35m"
# define GRAY		"\x1b[1;90m"
# define GREEN		"\x1b[1;32m"

# include <iostream>

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