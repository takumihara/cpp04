#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
	std::cout << "Default constructor was called to create WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor was called to delete WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) {
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return type_;
}

void WrongAnimal::makeSound() const {
	std::cout << "I AM WRONG ANIMAL!" << std::endl;
}
