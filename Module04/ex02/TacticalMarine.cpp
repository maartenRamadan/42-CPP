#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine& rhs)
{
	*this = rhs;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine&
TacticalMarine::operator=(const TacticalMarine& rhs)
{
	(void)rhs;
	return *this;
}

TacticalMarine*
TacticalMarine::clone() const
{
	return (new TacticalMarine);
}

void
TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void
TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void
TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}
