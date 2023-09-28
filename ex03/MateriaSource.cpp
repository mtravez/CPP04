#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << ORANGE << "MateriaSource default constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = materiaSource.inventory[i]->clone();
	std::cout << ORANGE << "MateriaSource copy constructor called" << RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete(inventory[i]);
	std::cout << ORANGE << "MateriaSource was destroyed" << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (materiaSource.inventory[i])
			inventory[i] = materiaSource.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << ORANGE << "MateriaSource copy assignment operator called" << RESET << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = materia;
			std::cout << ORANGE << materia->getType() << " learned successfully" << RESET << std::endl;
			return;
		}
	}
	std::cout << ORANGE << "MateriaSource can not learn more materials" << RESET << std::endl;
	delete materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType().compare(type) == 0)
		{
			std::cout << ORANGE << "AMateria of type " << type << " was created" << RESET << std::endl;
			return inventory[i]->clone();
		}
	}
	std::cout << ORANGE << "AMateria of type " << type << " couldn't be found in inventory" << RESET << std::endl;
	return NULL;
}