#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	static const int kMateria = 4;
	std::string name_;
	AMateria *materia_[kMateria];
	int idx_;

public:
	Character();

	explicit Character(const std::string &name);

	virtual ~Character();

	Character(Character const &rhs);

	Character &operator=(Character const &rhs);

	virtual std::string const &getName() const;

	virtual void equip(AMateria *m);

	virtual void unequip(int idx);

	virtual void use(int idx, ICharacter &target);
};


#endif //CPP04_CHARACTER_HPP
