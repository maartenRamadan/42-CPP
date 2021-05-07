#include "Gappie.hpp"

Gappie::Gappie()
{
	std::cout << "* struikelt binnen *" << std::endl;
	return ;
}

Gappie::Gappie(const Gappie& rhs)
{
	*this = rhs;
	return ;
}

Gappie::~Gappie()
{
	std::cout << "Dikke doeeei" << std::endl;
	return ;
}

Gappie*
Gappie::clone() const
{
	return (new Gappie);
}

void
Gappie::battleCry() const
{
	std::cout << "Heeeeey jongens!!" << std::endl;
	return ;
}

void
Gappie::rangedAttack() const
{
	std::cout << "* blaaaa *" << std::endl;
	return ;
}

void
Gappie::meleeAttack() const
{
	std::cout << "* iron fist *" << std::endl;
	return ;
}

Gappie&
Gappie::operator=(const Gappie& rhs)
{
	(void)rhs;
	return *this;
}
