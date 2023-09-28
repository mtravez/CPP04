#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define RESET      "\x1B[0m"
#define LIGHT_BLUE "\x1B[38;2;173;216;230m"
#define CYAN       "\x1B[38;2;0;255;255m"
#define YELLOW     "\x1B[38;2;255;255;0m"
#define DARK_BLUE  "\x1B[38;2;0;0;139m"
#define ORANGE     "\x1B[38;5;208m"

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria &aMateria);
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria &operator=(AMateria const &aMateria);
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};