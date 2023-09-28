#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrongAnimal")
{
	std::cout << CYAN << "WrongAnimal was created with default constructor" << RESET << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : type(wrongAnimal.type)
{
	std::cout << CYAN << "WrongAnimal withe type " << type << "was created with copy constructor" << RESET << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << CYAN << "WrongAnimal with the type " << type << " was created with type constructor" << RESET << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "WrongAnimal was destroyed" << RESET << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
	std::cout << CYAN << "WrongAnimal copy assignment operator called" << RESET << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << CYAN << "~wrongAnimal noise~" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}