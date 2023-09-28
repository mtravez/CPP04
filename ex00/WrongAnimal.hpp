#pragma once

#include <iostream>
#include <string>

#define RESET   "\x1B[0m"
#define CYAN    "\x1B[36m"
#define BLUE    "\x1B[34m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal(const std::string &type);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &wrongAnimal);
	void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};