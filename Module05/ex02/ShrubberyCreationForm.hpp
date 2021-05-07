#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm() {}

		std::string				_target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&		operator=(const ShrubberyCreationForm& rhs);

		void						execute(const Bureaucrat& executor) const;
};

#endif
