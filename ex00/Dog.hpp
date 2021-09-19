#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
private:

public:
	Dog();

	virtual ~Dog();

	Dog(Dog const &rhs);

	Dog &operator=(Dog const &rhs);

	std::string getType();

	virtual void makeSound() const ;
};


#endif //CPP04_DOG_HPP
