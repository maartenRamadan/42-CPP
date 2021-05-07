#include "Form.hpp"

Form::Form(std::string name, int exGrade, int signGrade)
{
	if (signGrade <= 0 || exGrade <= 0)
		throw Bureaucrat::HiEx();
	else if (signGrade > 150 || exGrade > 150)
		throw Bureaucrat::LoEx();
	this->_name = name;
	this->_signed = false;
	this->_exGrade = exGrade;
	this->_signGrade = signGrade;
	return ;
}

Form::~Form()
{
	return ;
}

Form::Form(const Form& rhs)
{
	*this = rhs;
	return ;
}

Form&
Form::operator=(const Form& rhs)
{
	static_cast <void> (rhs);
	return *this;
}

void
Form::beSigned(const Bureaucrat& rhs)
{
	if (this->_signed)
		throw Form::Signed();
	else if (rhs.getGrade() > this->_signGrade)
		throw Form::exLo();
	else
	{
		std::cout << rhs.getName() << " signs form " << this->_name << std::endl;
		this->_signed = true;
	}
	return ;
}

const char*
Form::Signed::what() const throw()
{
	return "form already signed";
}

const char*
Form::notSigned::what() const throw()
{
	return "form not signed yet";
}

const char*
Form::exLo::what() const throw()
{
	return "grade is too low too sign form.";
}

std::string
Form::getName() const
{
	return this->_name;
}

bool 	
Form::getSigned() const
{
	return this->_signed;
}

bool 	
Form::getEx() const
{
	return this->_executed;
}

int 	
Form::getExGrade() const
{
	return this->_exGrade;
}

int		
Form::getSignGrade() const
{
	return this->_signGrade;
}

void
Form::setEx()
{
	this->_executed = true;
	return ;
}

void
Form::execute(const Bureaucrat& rhs) const
{
	if (!this->_signed)
		throw Form::notSigned();
	if (this->_exGrade < rhs.getGrade())
		throw Form::exLo();
	std::cout << rhs.getName() << " executes form" << std::endl;
}

std::ostream&
operator<<(std::ostream& o, const Form& rhs)
{
	std::cout << "Form " << rhs.getName();
	if (rhs.getSigned())
	{
		std::cout << " is signed and ";
		if (!rhs.getEx())
			std::cout << "not ";
		std::cout << "executed";	
	}
	else
		std::cout << " is not signed and not executed.";
	std::cout << std::endl;
	return o;
}
