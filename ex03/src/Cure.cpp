
#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) : AMateria(src) {}

Cure::~Cure() {}

Cure & Cure::operator=(Cure const & src) {
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << GREEN "heals " MAGENTA << target.getName() << R "'s wounds *" << std::endl;
}