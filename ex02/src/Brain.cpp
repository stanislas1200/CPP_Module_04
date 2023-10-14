
#include "../include/Brain.hpp"

Brain::Brain(void) {
	std::cout << GRAY "Brain on" R << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "no idea";
}

Brain::Brain(const Brain& src) {
	std::cout << GRAY "Brain on" R << std::endl;
	for (int i = 0; i < 100; i++) // copy the ideas ? or just the pointer ?
		ideas[i] = src.ideas[i];
}

Brain::~Brain(void) {
	std::cout << GRAY "Brain off" R << std::endl;
}

Brain& Brain::operator=(const Brain& src) {
	if (this != &src)
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	return *this;
}

std::string Brain::getIdea(int i) const {
	return ideas[i];
}

void Brain::setIdea(int i, std::string s) {
	ideas[i] = s;
}