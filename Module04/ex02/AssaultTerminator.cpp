#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& rhs)
{
	*this = rhs;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
	return ;
}

AssaultTerminator*
AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

void
AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void
AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void
AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

AssaultTerminator&
AssaultTerminator::operator=(const AssaultTerminator& rhs)
{
	(void)rhs;
	return *this;
}
