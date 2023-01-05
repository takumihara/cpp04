#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
private:

public:
	Cat();

	virtual ~Cat();

	Cat(Cat const &rhs);

	Cat &operator=(Cat const &rhs);

	virtual void makeSound() const;

};


#endif //CPP04_CAT_HPP
