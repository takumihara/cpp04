#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {
}

Ice::Ice(Ice const &rhs) {
	*this = rhs;
}

Ice &Ice::operator=(Ice const &rhs) {
	if (this != &rhs) {
	}
	std::cout << "called" << std::endl;
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
