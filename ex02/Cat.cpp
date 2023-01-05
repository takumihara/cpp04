#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	type_ = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
	brain_ = new Brain;
}

Cat::~Cat() {
	delete brain_;
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(Cat const &rhs) {
	brain_ = new Brain;
	*this = rhs;
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
		*brain_ = *rhs.brain_;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "I AM CAT!" << std::endl;
}
