#include "Brain.hpp"

Brain::Brain()
{
	std::cout << PINK << "Brain was created with default constructor" << RESET << std::endl;
	return;
}

Brain::Brain(const Brain &brain)
{
	std::cout << PINK << "Brain was created with copy constructor" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain::~Brain()
{
	std::cout << PINK << "Brain was destroyed" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << PINK << "Brain copy assignment operator called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}
