#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include <string>

class Animal {
protected:
	std::string type_;

public:
	Animal();

	virtual ~Animal();

	Animal(Animal const &rhs);

	Animal &operator=(Animal const &rhs);

	std::string getType() const;

	virtual void makeSound() const;
};


#endif //CPP04_ANIMAL_HPP
