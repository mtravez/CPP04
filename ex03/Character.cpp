#include "Character.hpp"

Character::Character()
{
	this->name = "Default";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << YELLOW << name << " Character default constructor called" << RESET << std::endl;
}

Character::Character(const Character &character) : name(character.name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = character.inventory[i]->clone();
	std::cout << YELLOW << name << " Character copy constructor called" << RESET << std::endl;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << YELLOW << name << " Character name constructor called" << RESET << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete(inventory[i]);
	std::cout << YELLOW << name << " was destroyed" << RESET << std::endl;
}

Character &Character::operator=(const Character &character)
{
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (character.inventory[i])
			inventory[i] = character.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << YELLOW << name << " copy assignment operator called" << RESET << std::endl;
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << YELLOW << name << " has equipped " << m->getType() << RESET << std::endl;
			return ;
		}
	}
	std::cout << YELLOW << name << " has a full inventory" << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << YELLOW << name << "'s inventory has only numbers 0-3" << RESET << std::endl;
		return;
	}
	if (!inventory[idx])
	{
		std::cout << YELLOW << name << "'s inventory does not have any materia in " << idx << RESET << std::endl;
		return;
	}
	std::cout << YELLOW << name << " has unequipped " << inventory[idx]->getType() << RESET << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << YELLOW << name << "'s inventory has only numbers 0-3" << RESET << std::endl;
		return;
	}
	if (!inventory[idx])
	{
		std::cout << YELLOW << name << "'s inventory does not have any materia in " << idx << RESET << std::endl;
		return;
	}
	std::cout << YELLOW << name << " has used " << inventory[idx]->getType() << RESET << std::endl;
	inventory[idx]->use(target);
}

const std::string &Character::getName() const
{
	return name;
}