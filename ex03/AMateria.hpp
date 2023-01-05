#ifndef CPP04_AMATERIA_HPP
#define CPP04_AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
protected:
	std::string type_;

public:
	AMateria(std::string const &type);

	AMateria();

	virtual ~AMateria();

	AMateria(AMateria const &rhs);

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;

	virtual void use(ICharacter &target);
};


#endif //CPP04_AMATERIA_HPP
