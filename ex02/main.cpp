#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Dog *dog = new Dog;
	Cat *cat = new Cat;
//	Animal animal;

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
	return 0;
}