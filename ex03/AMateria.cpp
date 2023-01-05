#include "AMateria.hpp"
#include "iostream"
#include "ICharacter.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : type_(type) {}

std::string const &AMateria::getType() const {
	return type_;
}

AMateria::~AMateria() {}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << std::endl;
}

AMateria::AMateria(AMateria const &rhs) {
	*this = rhs;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	if (this != &rhs) {
//		todo: do i need copy?
	}
	return *this;
}
