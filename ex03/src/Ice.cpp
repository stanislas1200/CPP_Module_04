
#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria(src) {}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & src) {
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "shoots an " CYAN "ice bolt " R "at " MAGENTA << target.getName() << R " *" << std::endl;
}