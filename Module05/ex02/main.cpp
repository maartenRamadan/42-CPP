#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{	
	try
	{
		Bureaucrat* mattie = new Bureaucrat("mattie", 150);
		ShrubberyCreationForm* test = new ShrubberyCreationForm("test");
		std::cout << std::endl;

		mattie->signForm(*test);
		std::cout << *test << std::endl;
		std::cout << std::endl;
	
		mattie->executeForm(*test);	
		std::cout << *test << std::endl;
		std::cout << std::endl;

		delete mattie;
		delete test;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-------------------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat* mattie = new Bureaucrat("mattie", 150);
		ShrubberyCreationForm* test = new ShrubberyCreationForm("test");
		std::cout << std::endl;

		mattie->signForm(*test);
		std::cout << *test << std::endl;
		std::cout << std::endl;
	
		mattie->executeForm(*test);	
		std::cout << std::endl;

		delete mattie;
		delete test;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-------------------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat* mattie = new Bureaucrat("mattie", 1);
		ShrubberyCreationForm* test = new ShrubberyCreationForm("test");
		std::cout << std::endl;

		mattie->signForm(*test);
		std::cout << *test << std::endl;
		std::cout << std::endl;
	
		mattie->executeForm(*test);	
		std::cout << std::endl;

		delete mattie;
		delete test;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-------------------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat* browser = new Bureaucrat("Browser", 1);
		Form* robot = new RobotomyRequestForm("Robot");
		std::cout << std::endl;

		browser->signForm(*robot);
		std::cout << *robot << std::endl;
		std::cout << std::endl;
	
		browser->executeForm(*robot);
		delete browser;
		delete robot;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "-------------------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat* brohimi2 = new Bureaucrat("Brohimi", 5);
		Bureaucrat* brohimi = new Bureaucrat("Brohimi2", 25);
		Form* president = new PresidentialPardonForm("President");
		std::cout << std::endl;

		brohimi2->signForm(*president);
		std::cout << *president << std::endl;
		std::cout << std::endl;
	
		brohimi->executeForm(*president);
		std::cout << std::endl;

		delete brohimi;
		delete president;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
