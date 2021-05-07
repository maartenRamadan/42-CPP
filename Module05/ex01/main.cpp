#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	Bureaucrat francis("Francis", 100);
	Bureaucrat patrick("Patrick", 1);
	std::cout << francis << std::endl;

	try
	{
		Form form("Bla", 2, 2);
		std::cout << form << std::endl;
		patrick.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form form1("Taxes", 100, 50);
		std::cout << form1 << std::endl;
		francis.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "---" << std::endl;
		Form form2("NDA", 99, 50);
		francis.signForm(form2);
		std::cout << form2 << std::endl;
		francis.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;

	try
	{
		Form form3("Other Paper", 101, 50);
		std::cout << form3 << std::endl;
		francis.signForm(form3);
		std::cout << form3 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	try
	{
		Form form4("NDA", 99, 50);
		std::cout << form4 << std::endl;
		francis.signForm(form4);
		std::cout << form4 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	try
	{
		Form form5("Important Form", 151, 50);
		std::cout << form5 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	try
	{
		Form form6("Important Form", 0, 50);
		std::cout << form6 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	try
	{
		Form form7("Important Form", 100, 151);
		std::cout << form7 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	try
	{
		Form form8("Important Form", 100, 0);
		std::cout << form8 << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
