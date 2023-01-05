#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor was called to create Dog" << std::endl;
	type_ = "Dog";
}

Dog::~Dog() {
	std::cout << "Destructor was called to delete Dog" << std::endl;
}

Dog::Dog(Dog const &rhs) {
	*this = rhs;
}

Dog &Dog::operator=(Dog const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "I AM DOG!" << std::endl;
}
