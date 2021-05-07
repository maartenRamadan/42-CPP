#include "Pony.hpp"

Pony::Pony() { std::cout << "Pony created" << std::endl; };
Pony::~Pony() { std::cout << "Pony died" << std::endl; };

std::string		Pony::getName(void)					{ return (this->_name); }
std::string		Pony::getColor(void)				{ return (this->_color); }
int				Pony::getAge(void)					{ return (this->_age); }

void			Pony::setName(std::string name)		{ this->_name = name; };
void			Pony::setColor(std::string color)	{ this->_color = color; };
void			Pony::setAge(int age)				{ this->_age = age; };


void	
Pony::pony_on_heap(std::string name, std::string color, int age)
{
	try {
		Pony* tmp = new Pony;

		tmp->setName(name);
		tmp->setColor(color);
		tmp->setAge(age);

		std::cout	<< tmp->getName()	<< std::endl
					<< tmp->getColor()	<< std::endl
					<< tmp->getAge()	<< std::endl;

		delete tmp;
	}
	catch (const std::exception &e)	{
		std::cerr << e.what() << std::endl;
	}
}

void
Pony::pony_on_stack(std::string name, std::string color, int age)
{
	Pony tmp;

	tmp.setName(name);
	tmp.setColor(color);
	tmp.setAge(age);

	std::cout	<< tmp.getName()	<< std::endl
				<< tmp.getColor()	<< std::endl
				<< tmp.getAge()		<< std::endl;
}
