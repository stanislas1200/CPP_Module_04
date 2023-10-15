
#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(AMateria const & src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria const & src) { // copying the type doesn’t make sense. ?
	if (this != &src)
		_type = src._type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}