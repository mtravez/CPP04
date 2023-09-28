#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &materiaSource);
	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);

private:
	AMateria *inventory[4];
};
