#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	type_ = "Cat";
}

Cat::~Cat() {
}

Cat::Cat(Cat const &rhs) {
	*this = rhs;
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

std::string Cat::getType() {
	return type_;
}

void Cat::makeSound() const {
	std::cout << "I AM CAT!" << std::endl;
}
