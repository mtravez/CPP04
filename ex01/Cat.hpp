#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	Cat &operator=(Cat const &cat);
	void makeSound() const;

private:
	Brain *brain;
};