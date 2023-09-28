#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << BLUE << "WrongCat was created with default constructor" << RESET << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << BLUE << "WrongCat with the type " << type << " was created with copy constructor" << RESET << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << BLUE << "WrongCat was destroyed" << RESET << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	this->type = wrongCat.type;
	std::cout << BLUE << "WrongCat copy assignment operator called" << RESET << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << BLUE << "~meow~" << RESET << std::endl;
	return;
}