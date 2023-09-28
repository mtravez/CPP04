#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	Cat &operator=(Cat const &cat);
	void makeSound() const;
};