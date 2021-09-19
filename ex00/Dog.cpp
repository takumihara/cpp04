#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	type_ = "Dog";
}

Dog::~Dog() {
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

std::string Dog::getType() {
	return type_;
}

void Dog::makeSound() const {
	std::cout << "I AM DOG!" << std::endl;
}
