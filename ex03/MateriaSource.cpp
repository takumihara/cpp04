#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : index_(0) {
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < index_; ++i) {
		delete materia_[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &rhs) {
	*this = rhs;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	if (this != &rhs) {
		index_ = rhs.index_;
		for (int i = 0; i < kMateria; ++i) {
			materia_[i] = rhs.materia_[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (index_ != kMateria) {
		materia_[index_] = materia;
		index_++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	int i;
	for (i = 0; i < index_ && materia_[i]->getType() != type; ++i) {
	}
	if (i == kMateria)
		return 0;
	return materia_[i]->clone();
}
