#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default constructor was called to create WrongCat" << std::endl;
	type_ = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "Destructor was called to delete WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) {
	*this = rhs;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "I AM WRONG CAT!" << std::endl;
}
