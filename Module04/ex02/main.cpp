#include "AssaultTerminator.hpp"
#include "Gappie.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

int main()
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jop = new AssaultTerminator;
		ISpaceMarine* jim = new TacticalMarine;
		ISpaceMarine* pim = new Gappie;
		ISpaceMarine* bert = new TacticalMarine;
		ISpaceMarine* bart = new AssaultTerminator;
		std::cout << std::endl;

		ISpaceMarine* johan = bart;

		ISpaceMarine* frits = NULL;

		std::cout << "---------- DEFAULT ----------" << std::endl;

		Squad* vlc = new Squad;
		std::cout << std::endl;

		vlc->push(bob);
		vlc->push(jop);
		vlc->push(jim);
		vlc->push(pim);
		vlc->push(bert);
		vlc->push(bart);
		vlc->push(bart);
		vlc->push(johan);
		vlc->push(frits);
		std::cout << std::endl;
	

		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			std::cout << std::endl;
		}
		std::cout << std::endl;

		std::cout << "---------- COPY ----------" << std::endl;

		ISquad* vlc2 = new Squad(*vlc);
		std::cout << std::endl;


		for (int i = 0; i < vlc2->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc2->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			std::cout << std::endl;
		}
		delete vlc;
		delete vlc2;
		std::cout << std::endl;
	}

	{
		std::cout << "---------- ASSIGNATION ----------" << std::endl;
		
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jop = new AssaultTerminator;
		ISpaceMarine* jim = new TacticalMarine;
		ISpaceMarine* pim = new Gappie;
		ISpaceMarine* bert = new TacticalMarine;
		std::cout << std::endl;

		Squad* vlc = new Squad;
		std::cout << std::endl;
		vlc->push(bob);
		vlc->push(jop);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			std::cout << std::endl;
		}


		ISquad* vlc3 = new Squad;
		vlc3->push(pim);
		vlc3->push(bert);
		std::cout << std::endl;

		*vlc3 = *vlc;
		std::cout << std::endl;

		for (int i = 0; i < vlc3->getCount(); i++)
		{
			ISpaceMarine* cur = vlc3->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			std::cout << std::endl;
		}
		std::cout << std::endl;

		ISpaceMarine* cpy = vlc->getUnit(3);
		if (cpy)
			cpy->battleCry();

		cpy = vlc->getUnit(2);
		if (cpy)
			cpy->battleCry();
		std::cout << std::endl;

		delete vlc;
		delete vlc3;
	}
	return 0;
}