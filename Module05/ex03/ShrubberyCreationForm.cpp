#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery Creation", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form with target " << target << " constructed" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destructed" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
{
	*this = rhs;
	return ;
}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

void
ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::ofstream fd;
	std::string file = this->_target + "_shrubbery";
	fd.open(file, std::ofstream::trunc);
	if (fd.fail())
		std::cerr << "Error creating output file";
	else
	{
		fd 		<< "         ^                 	"		<< std::endl
				<< "        /|\\                " 		<< std::endl
				<< "       /*|O\\				"		<< std::endl
				<< "      /*/|\\*\\				"		<< std::endl
				<< "     /X/O|*\\X\\			"	 	<< std::endl
				<< "    /*/X/|\\X\\*\\			"		<< std::endl
				<< "   /O/*/X|*\\O\\X\\         "		<< std::endl
				<< "  /*/O/X/|\\X\\O\\X\\		"		<< std::endl
				<< " /X/O/*/X|O\\X\\*\\O\\		"		<< std::endl
				<< "/O/X/*/O/|\\X\\*\\O\\X\\	"		<< std::endl
				<< "        |X|					"		<< std::endl
				<< "        |X| 				"		<< std::endl;
		fd.close();
		std::cout << this->getName() << " is succesfully executed" << std::endl;
	}
	return ;
}
