#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREY << "Cat was created with default constructor" << RESET << std::endl;
	return;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << GREY << "Cat with the type " << type << " was created with copy constructor" << RESET << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << GREY << "Cat was destroyed" << RESET << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	std::cout << GREY << "Cat copy assignment operator called" << RESET << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << GREY << "~meow~" << RESET << std::endl;
	return;
}