#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g)
{
	if (g < 1)
		throw Bureaucrat::HiEx();
	if (g > 150)
		throw Bureaucrat::LoEx();
	this->_name = n;
	this->_grade = g;

	std::cout << "Bureaucrat constructed" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructed" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
{
	*this = rhs;
	return ;
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat& rhs)
{
	this->_grade = rhs._grade;
	this->_name = rhs._name;
	return *this;
}

std::string
Bureaucrat::getName() const
{
	return this->_name;
}

int
Bureaucrat::getGrade() const
{
	return this->_grade;
}

void
Bureaucrat::increment()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::HiEx();
	else
		this->_grade--;
	return ;
}

void
Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::LoEx();
	else
		this->_grade++;
	return ;
}

std::ostream&
operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o	<< rhs.getName()
		<< ", bureaucrat grade "
		<< rhs.getGrade()
		<< std::endl;
	return o;
}

const char*
Bureaucrat::HiEx::what() const throw()
{
	return "Throwing the exception because the grade is too high";
}

const char*
Bureaucrat::LoEx::what() const throw()
{
	return "Throwing the exception because the grade is too low";
}
