#ifndef CPP04_WRONGANIMAL_HPP
#define CPP04_WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
	std::string type_;

public:
	WrongAnimal();

	~WrongAnimal();

	WrongAnimal(WrongAnimal const &rhs);

	WrongAnimal &operator=(WrongAnimal const &rhs);

	std::string getType() const;

	void makeSound() const;
};


#endif //CPP04_WRONGANIMAL_HPP
