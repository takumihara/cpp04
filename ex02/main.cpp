#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
//	const Animal *animal = new Animal();
//	delete animal;

	const Dog *dog = new Dog();
	const Cat *cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;
}
