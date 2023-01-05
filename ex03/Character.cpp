#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : idx_(0) {
	for (int i = 0; i < kMateria; ++i) {
		materia_[i] = NULL;
	}
}

Character::Character(const std::string &name) : name_(name), idx_(0) {
	name_ = name;
	for (int i = 0; i < kMateria; ++i) {
		materia_[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < kMateria; ++i) {
		delete materia_[i];
	}
}

Character::Character(Character const &rhs) {
	*this = rhs;
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) {
		name_ = rhs.name_;
		for (int i = 0; i < kMateria; ++i) {
			delete materia_[i];
			if (rhs.materia_[i]) {
				materia_[i] = rhs.materia_[i]->clone();
			} else {
				materia_[i] = NULL;
			}
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return name_;
}

void Character::equip(AMateria *m) {
	if (idx_ < kMateria) {
		materia_[idx_] = m;
		idx_++;
	} else {
		int i;
		for (i = 0; i < kMateria && materia_[i]; ++i) {}
		if (i == kMateria)
			return;
		materia_[i] = m;
	}

}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= kMateria || !materia_[idx]) {
		return;
	}
	materia_[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= kMateria || !materia_[idx]) {
		return;
	}
	materia_[idx]->use(target);
}
