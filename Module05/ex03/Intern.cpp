#include "Intern.hpp"

Intern::Intern()
{
	for (int i = 0; i < 3; i++)
		this->_forms[i] = NULL;
	std::cout << "Intern constructed" << std::endl;
	return ;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
	return ;
}

Intern::Intern(const Intern& rhs)
{
	*this = rhs;
	return ;
}

Intern&
Intern::operator=(const Intern& rhs)
{
	for (int i = 0; rhs._forms[i]; ++i)
		this->_forms[i] = rhs._forms[i];
	return (*this);
}

Form*
Intern::makeForm(std::string name, std::string target)
{
	Form* ret = NULL;
	
	this->_forms[0] = new PresidentialPardonForm(target);
	this->_forms[1] = new ShrubberyCreationForm(target);
	this->_forms[2] = new RobotomyRequestForm(target);
	int i = 0;
	for (; i < 3; ++i) {
		if (name == this->_forms[i]->getName()){
			ret = this->_forms[i];
			break ;
		}
	}
	if (ret == NULL)		
		std::cout << "Intern can't make requested form" << std::endl;
	else
		std::cout << "Intern creates " << ret->getName() << std::endl;
	for (int j = 0; j < 3; ++j){
		if (j != i)
			delete this->_forms[j];
	}
	return ret;
}
