#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << CYAN << type << " Cure default constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	std::cout << CYAN << type << " Cure copy constructor called" << RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << CYAN << type << " was destroyed" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
	this->type = cure.type;
	return *this;
}

Cure *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << CYAN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}