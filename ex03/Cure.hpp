#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &cure);
	virtual ~Cure();
	Cure &operator=(Cure const &cure);
	Cure *clone() const;
	void use(ICharacter &target);
};