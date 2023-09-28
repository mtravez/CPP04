#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << LIME << "Animal was created with default constructor" << RESET << std::endl;
	return;
}

Animal::Animal(const Animal &animal) : type(animal.type)
{
	std::cout << LIME << "Animal withe type " << type << "was created with copy constructor" << RESET << std::endl;
	return;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << LIME << "Animal with the type " << type << " was created with type constructor" << RESET << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << LIME << "Animal was destroyed" << RESET << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	std::cout << LIME << "Animal copy assignment operator called" << RESET << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << LIME << "~animal noise~" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}