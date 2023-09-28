#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal *farm[10];
	for (int i = 0; i < 5; i++)
		farm[i] = new Dog();
	for (int i = 5; i < 10; i++)
		farm[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete (farm[i]);

	Dog basic;
	{
		Dog tmp = basic;
	}
	return 0;
}