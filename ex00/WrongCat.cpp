#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type_ = "WrongCat";
}

WrongCat::~WrongCat() {
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

std::string WrongCat::getType() {
	return type_;
}

void WrongCat::makeSound() const {
	std::cout << "I AM WRONG CAT!" << std::endl;
}
