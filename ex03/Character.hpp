#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(Character const &character);
	Character(std::string name);
	~Character();
	Character &operator=(const Character &character);
	void use(int idx, ICharacter &target);
	void unequip(int idx);
	void equip(AMateria *materia);
	const std::string & getName() const;
private:
	std::string name;
	AMateria *inventory[4];
};