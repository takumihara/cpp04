#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(Brain const &rhs) {
	*this = rhs;
}

Brain &Brain::operator=(Brain const &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->ideas_[i] = rhs.ideas_[i];
		}
	}
	return *this;
}