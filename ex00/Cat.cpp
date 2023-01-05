#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default constructor was called to create Cat" << std::endl;
	type_ = "Cat";
}

Cat::~Cat() {
	std::cout << "Destructor was called to delete Cat" << std::endl;
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

void Cat::makeSound() const {
	std::cout << "I AM CAT!" << std::endl;
}
