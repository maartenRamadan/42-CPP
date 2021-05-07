#include "Guy.hpp"

Guy::Guy(std::string n) : Victim(n)
{
	std::cout << "Waasssuuup" << std::endl;
	return ;
}

Guy::~Guy()
{
	std::cout << "Dikke doei!" << std::endl;
	return ;
}

Guy::Guy(const Guy& rhs)
{
	*this = rhs;
	std::cout << "Guy " << this->_name << " copied" << std::endl;
	return ;
}

Guy&
Guy::operator=(const Guy& rhs)
{
	this->_name = rhs._name;
    return *this;
}

void
Guy::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink little cute!" << std::endl;
	return ;
}
