#pragma once

#include <iostream>
#include <string>

#define RESET   "\x1B[0m"
#define BROWN   "\x1B[38;2;139;69;19m"
#define GREY    "\x1B[38;2;128;128;128m"
#define LIME    "\x1B[38;2;50;205;50m"

class Animal
{
public:
	Animal();
	Animal(const Animal &animal);
	Animal(const std::string &type);
	virtual ~Animal();
	Animal &operator=(Animal const &animal);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};
