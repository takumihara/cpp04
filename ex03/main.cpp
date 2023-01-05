#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

__attribute__((destructor))
void	destructor(void)
{
	int	status;

	status = system("leaks a.out &> leaksout");
	if (status)
	{
		std::cout << "leak!!!" << std::endl;
		system("cat leaksout >/dev/stderr");
		exit(1);
	}
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << "--manual--" << std::endl;

	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	*ice = *cure;
	std::cout << ice->getType() << std::endl;

	delete ice;
	delete cure;

	me->use(3, *bob);
	me->unequip(3);

	me->unequip(1);
	me->use(1, *bob);

	delete tmp;
	delete me;
	delete src;
	delete bob;

	return 0;
}
