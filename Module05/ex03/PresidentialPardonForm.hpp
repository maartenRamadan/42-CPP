#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm() {}

		std::string					_target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm();
		PresidentialPardonForm&		operator=(const PresidentialPardonForm& rhs);
		
		void						execute(const Bureaucrat& executor) const;
};

#endif
