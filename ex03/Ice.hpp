#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:

public:
	Ice();

	virtual ~Ice();

	Ice(Ice const &rhs);

	Ice &operator=(Ice const &rhs);

	virtual AMateria *clone() const;

	virtual void use(ICharacter& target);
};


#endif //CPP04_ICE_HPP
