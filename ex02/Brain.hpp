#pragma once

#include <iostream>
#include <string>

#define PINK    "\x1B[38;2;255;105;180m"
#define RESET   "\x1B[0m"

class Brain
{
public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	Brain &operator=(const Brain &brain);
private:
	std::string ideas[100];
};