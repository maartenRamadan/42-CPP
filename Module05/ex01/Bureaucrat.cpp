#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n), _grade(g)
{
	if (g < 1)
		throw Bureaucrat::HiEx();
	if (g > 150)
		throw Bureaucrat::LoEx();
	_grade = g;
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

void
Bureaucrat::signForm(Form& form) const
{
	try {
		form.beSigned(*this);
		std::cout	<< this->_name << " signed form " 
					<< form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr 	<< this->_name << " cannot sign form because " 
					<< e.what() << std::endl;
	}
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
	return "Grade is too high";
}

const char*
Bureaucrat::LoEx::what() const throw()
{
	return "Grade is too low";
}
