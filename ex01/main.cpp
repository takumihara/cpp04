#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	std::cout << "\n--main.c in subject--\n" << std::endl;

	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << "\n--instantiate original objects--\n" << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << "\n--instantiate array--\n" << std::endl;

	int animal_num = 4;
	Animal *animals[animal_num];
	for (int k = 0; k < animal_num; ++k) {
		std::cout << k << ": " << std::endl;
		if (k % 2) {
			animals[k] = new Dog;
			*animals[k] = *dog;
		}
		else {
			animals[k] = new Cat;
			*animals[k] = *cat;
		}
	}

	std::cout << "\n--deep vs copy test--\n" << std::endl;
	std::cout << "original objects address: " << std::endl;
	std::cout << "dog: " << dog << std::endl;
	std::cout << "cat: " << cat << std::endl;
	std::cout << "copied objects address: " << std::endl;
	for (int k = 0; k < animal_num; ++k) {
		std::cout << k << ": " << animals[k] << std::endl;
	}

	std::cout << "\n--delete array--\n" << std::endl;

	for (int k = 0; k < animal_num; ++k) {
		std::cout << k << ": " << std::endl;
		delete animals[k];
	}

	delete dog;
	delete cat;
}
