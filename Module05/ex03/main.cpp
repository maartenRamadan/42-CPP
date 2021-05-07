#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *man = new Bureaucrat("man", 1);
	Intern *boy = new Intern;
	std::cout << std::endl;

	Form* form = boy->makeForm("Presidential Pardon", "wassup");
	std::cout << std::endl;

	man->signForm(*form);
	std::cout << *form << std::endl;
	std::cout << std::endl;

	man->executeForm(*form);
	std::cout << std::endl;

	delete boy;
	delete man;
	delete form;
	return (0);
}
