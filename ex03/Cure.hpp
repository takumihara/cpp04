#ifndef CPP04_CURE_HPP
#define CPP04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
private:

public:
	Cure();

	virtual ~Cure();

	Cure(Cure const &rhs);

	Cure &operator=(Cure const &rhs);

	virtual AMateria *clone() const;

	virtual void use(ICharacter& target);
};


#endif //CPP04_CURE_HPP
