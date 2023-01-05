#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {
}

Cure::Cure(Cure const &rhs) {
	*this = rhs;
}

Cure &Cure::operator=(Cure const &rhs) {
	if (this != &rhs) {
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName()
			  << "'s wounds *" << std::endl;
}

