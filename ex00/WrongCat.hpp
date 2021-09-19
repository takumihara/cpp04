#ifndef CPP04_WRONGCAT_HPP
#define CPP04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
	WrongCat();

	~WrongCat();

	WrongCat(WrongCat const &rhs);

	WrongCat &operator=(WrongCat const &rhs);

	std::string getType();

	void makeSound() const;

};


#endif //CPP04_WRONGCAT_HPP
