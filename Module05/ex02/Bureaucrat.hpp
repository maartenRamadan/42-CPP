#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat() {}

		std::string		_name;
		int				_grade;

	public:
		Bureaucrat(std::string n, int g);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat&		operator=(const Bureaucrat& rhs);
		
		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();
		void			signForm(Form& rhs) const;
		void			executeForm(Form& rhs);

		class HiEx : public std::exception {
			virtual const char*	what() const throw();
		};
		class LoEx : public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&			operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
