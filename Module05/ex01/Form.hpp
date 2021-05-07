#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form() {}

		std::string		_name;
		int				_exGrade;
		int				_signGrade;
		bool			_signed;
		bool			_executed;

	public:
		Form(std::string n, int exG, int signG);
		~Form();
		Form(const Form& rhs);
		Form&		operator=(const Form& rhs);

		void		beSigned(const Bureaucrat& rhs);

		std::string		getName() const;
		bool			getSigned() const;
		bool			getEx() const;
		int				getExGrade() const;
		int				getSignGrade() const;

		class Signed : public std::exception {
			virtual const char* what() const throw();
		};
		class exLo : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream&		operator<<(std::ostream& o, const Form& rhs);

#endif
