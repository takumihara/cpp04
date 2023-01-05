#ifndef CPP04_MATERIASOURCE_HPP
#define CPP04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	static const int kMateria = 4;
	AMateria *materia_[kMateria];
	int index_;

public:
	MateriaSource();

	~MateriaSource();

	MateriaSource(MateriaSource const &rhs);

	MateriaSource &operator=(MateriaSource const &rhs);

	virtual void learnMateria(AMateria *materia);

	virtual AMateria *createMateria(std::string const &type);
};


#endif //CPP04_MATERIASOURCE_HPP
