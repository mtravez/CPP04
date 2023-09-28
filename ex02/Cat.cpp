#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain)
{
	std::cout << GREY << "Cat was created with default constructor" << RESET << std::endl;
	return;
}

Cat::Cat(const Cat &cat) : Animal(cat), brain(new Brain(*cat.brain))
{
	std::cout << GREY << "Cat with the type " << type << " was created with copy constructor" << RESET << std::endl;
	return;
}

Cat::~Cat()
{
	delete(brain);
	std::cout << GREY << "Cat was destroyed" << RESET << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << GREY << "Cat copy assignment operator called" << RESET << std::endl;
	this->type = cat.type;
	*this->brain = *cat.brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << GREY << "~meow~" << RESET << std::endl;
	return;
}