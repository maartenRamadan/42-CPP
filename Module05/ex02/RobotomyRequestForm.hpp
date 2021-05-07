#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm() {}

		std::string				_target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();
		RobotomyRequestForm&		operator=(const RobotomyRequestForm& rhs);

		void						execute(const Bureaucrat& executor) const;

		class failed : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
