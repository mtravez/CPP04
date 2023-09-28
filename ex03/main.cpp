#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

//int main()
//{
//	AMateria *floor[4];
//	Character *brian = new Character("Brian");
//	IMateriaSource *src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Cure()); // should print an error message and delete the cure
//	floor[0] = src->createMateria("ice");
//	brian->equip(floor[0]);
//	brian->unequip(0);
//	brian->unequip(0);//error message
//	floor[1] = src->createMateria("cure");
//	floor[2] = src->createMateria("ice");
//	floor[3] = src->createMateria("cure");
//	brian->equip(floor[1]);
//	brian->equip(floor[0]);
//	Character *mike = new Character();
//	*mike = *brian; //should deep copy inventory
//	mike->equip(floor[2]);
//	mike->equip(floor[3]);
//	mike->equip(floor[0]); //error message here
//	brian->unequip(0);
//	brian->unequip(3);//error message
//	brian->unequip(15);//error message
//	brian->use(1, *mike);
//	delete brian;
//	delete mike;
//	delete src;
//	delete floor[1];
//	return (0);
//}