#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &ice);
	virtual ~Ice();
	Ice &operator=(Ice const &ice);
	Ice *clone() const;
	void use(ICharacter &target);
};