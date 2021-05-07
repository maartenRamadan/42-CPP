#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("Presidential Pardon", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form with target " << target << " constructed" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form destructed" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
{
	*this = rhs;
	return ;
}

PresidentialPardonForm&
PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

void
PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod BeebleBrox." << std::endl;
	return ;
}
