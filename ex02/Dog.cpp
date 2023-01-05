#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	type_ = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
	brain_ = new Brain;
}

Dog::~Dog() {
	delete brain_;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(Dog const &rhs) {
	brain_ = new Brain;
	*this = rhs;
}

Dog &Dog::operator=(Dog const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
		*brain_ = *rhs.brain_;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "I AM DOG!" << std::endl;
}
