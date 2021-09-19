#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	type_ = "Animal";
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(Animal const &rhs) {
	*this = rhs;
}

Animal &Animal::operator=(Animal const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

std::string Animal::getType() const {
	return type_;
}

void Animal::makeSound() const {
	std::cout << "I AM ANIMAL!" << std::endl;
}
