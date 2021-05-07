#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	Form*		_forms[3];

	public:
		Intern();
		~Intern();
		Intern(const Intern& rhs);
		Intern&		operator=(const Intern& rhs);

		Form*		makeForm(std::string name, std::string target);
};

#endif
