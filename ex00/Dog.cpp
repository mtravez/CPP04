#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << BROWN << "Dog was created with default constructor" << RESET << std::endl;
	return;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << BROWN << "Dog with the type " << type << " was created with copy constructor" << RESET << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << BROWN << "Dog was destroyed" << RESET << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	std::cout << BROWN << "Dog copy assignment operator called" << RESET << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << BROWN << "~woof~" << RESET << std::endl;
	return;
}