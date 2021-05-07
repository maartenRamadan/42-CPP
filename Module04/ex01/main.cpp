#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("Patrick");
	std::cout << *me << std::endl;

	Enemy* a = new RadScorpion();
	std::cout << std::endl;

	Enemy* b = new SuperMutant();
	std::cout << std::endl;

	RadScorpion* c = new RadScorpion();
	std::cout << std::endl;

	SuperMutant* d = new SuperMutant();
	std::cout << std::endl;

	AWeapon* pr = new PlasmaRifle();
	std::cout << std::endl;

	me->equip(pr);
	std::cout << *me << std::endl;

	me->attack(a);
	std::cout << std::endl;
	me->attack(a);
	std::cout << std::endl;
	me->attack(a);
	std::cout << std::endl;
	me->attack(a);
	std::cout << std::endl;

	std::cout << *me << std::endl;

	AWeapon* pf = new PowerFist();
	std::cout << std::endl;

	me->equip(pf);
	std::cout << *me << std::endl;

	me->attack(b);
	std::cout << std::endl;
	me->attack(b);
	std::cout << std::endl;
	me->attack(b);
	std::cout << std::endl;

	while (me->getAP() < 40)
		me->recoverAP();
	std::cout << std::endl;

	std::cout << *me << std::endl;

	me->attack(b);
	std::cout << std::endl;
	me->attack(b);
	std::cout << std::endl;

	std::cout << *me << std::endl;

	delete c;
	std::cout << std::endl;


	delete d;
	std::cout << std::endl;

	delete pr;
	delete pf;
	std::cout << std::endl;

	delete me;

	return 0;
}