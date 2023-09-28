#include "AMateria.hpp"

AMateria::AMateria() : type("stuff")
{
	std::cout << DARK_BLUE << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &aMateria) : type(aMateria.type)
{
	std::cout << DARK_BLUE << "AMateria copy constructor called" << RESET << std::endl;
}

AMateria::AMateria(const std::string &type) : type(type)
{
	std::cout << DARK_BLUE << "AMateria type constructor called" << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << DARK_BLUE << "AMateria was detroyed" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
	std::cout << DARK_BLUE << "AMateria copy assignment operator called" << RESET << std::endl;
	this->type = aMateria.getType();
	return *this;
}

const std::string &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << DARK_BLUE << "* " << type << " does something *" << RESET << std::endl;
}