#include "AMateria.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice);
	std::cout << std::endl;

	src->learnMateria(new Cure);
	src->learnMateria(new Ice);
	src->learnMateria(new Fire);
	src->learnMateria(new Cure);
	std::cout << std::endl;

	std::cout << "me-------" << std::endl;
	Character* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");

	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("fire");
	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("fire");
	me->equip(tmp);
	std::cout << std::endl;
	me->printInventory();
	std::cout << std::endl;

	std::cout << "me4-------" << std::endl;

	Character* me4 = new Character("bla");
	tmp = src->createMateria("fire");
	me4->equip(tmp);
	tmp = src->createMateria("ice");
	me4->equip(tmp);
	std::cout << std::endl;

	*me4 = *me;
	std::cout << std::endl;

	me4->printInventory();
	std::cout << std::endl;

	delete me4;
	std::cout << std::endl;

	std::cout << "me2-------" << std::endl;
	Character* me2 = new Character("me2");
	tmp = src->createMateria("cure");
	me2->equip(tmp);
	tmp = src->createMateria("fire");
	me2->equip(tmp);
	std::cout << std::endl;

	*me2 = *me;
	std::cout << std::endl;

	me2->printInventory();
	std::cout << std::endl;

	std::cout << "me3-------" << std::endl;
	Character* me3 = new Character(*me2);
	me3->printInventory();
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(5, *bob);

	std::cout << std::endl;

	me->printInventory();

	me->unequip(0);
	me->unequip(0);
	me->unequip(5);
	
	me->printInventory();
	std::cout << std::endl;

	delete bob;
	delete me;
	delete me2;
	delete me3;
	delete src;
	system("leaks a.out | grep bytes");
	return 0;
}