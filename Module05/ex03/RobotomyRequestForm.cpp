#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Robotomy Request", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form with target " << target << " constructed" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form destructed" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
{
	*this = rhs;
	return ;
}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

void
RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
    std::cout << "drilling sound..." << std::endl;
    static bool first = false;
    if (!first)
    {
        srand(time(NULL));
        first = true;
    }
    if (rand() % 2)
        std::cout << "Robotomizing " << this->_target << " was successful." << std::endl;
    else
		throw RobotomyRequestForm::failed();
	return ;
}

const char* 
RobotomyRequestForm::failed::what() const throw()
{
	return "it failed";
}