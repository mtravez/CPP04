#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	std::cout << BROWN << "Dog was created with default constructor" << RESET << std::endl;
	return;
}

Dog::Dog(const Dog &dog) : Animal(dog), brain(new Brain(*dog.brain))
{
	std::cout << BROWN << "Dog with the type " << type << " was created with copy constructor" << RESET << std::endl;
	return;
}

Dog::~Dog()
{
	delete(brain);
	std::cout << BROWN << "Dog was destroyed" << RESET << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << BROWN << "Dog copy assignment operator called" << RESET << std::endl;
	this->type = dog.type;
	*this->brain = *dog.brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << BROWN << "~woof~" << RESET << std::endl;
	return;
}