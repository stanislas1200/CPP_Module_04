
# include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << GREEN "A " YELLOW "WrongCat" GREEN " is born." R << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal("WrongCat")  {
	std::cout << GREEN "A " YELLOW "WrongCat" GREEN " is born." R << std::endl;
    type = src.type;
}

WrongCat::~WrongCat(void) {
	std::cout << RED "A " YELLOW "WrongCat" RED " is gone." R << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this != &src)
		type = src.type;
	return *this;
}

void WrongCat::makeSound(void)  const {
	std::cout << YELLOW "WrongCat : " R BOLD "Miaou" R << std::endl;
}
