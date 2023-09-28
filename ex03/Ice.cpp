#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << LIGHT_BLUE << type << " Ice default constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	std::cout << LIGHT_BLUE << type << " Ice copy constructor called" << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << LIGHT_BLUE << type << " was destroyed" << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
	this->type = ice.type;
	return *this;
}

Ice *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << LIGHT_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}