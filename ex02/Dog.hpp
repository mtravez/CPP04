#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	Dog &operator=(Dog const &dog);
	void makeSound() const;

private:
	Brain *brain;
};