#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	std::string		_name;
	int				_exGrade;
	int				_signGrade;
	bool			_signed;
	bool			_executed;

	protected:
		Form() {}

	public:
		Form(std::string n, int exG, int signG);
		virtual ~Form();
		Form(const Form& rhs);
		Form&		operator=(const Form& rhs);

		void		beSigned(const Bureaucrat& rhs);

		std::string		getName() const;
		bool			getSigned() const;
		bool			getEx() const;
		int				getExGrade() const;
		int				getSignGrade() const;
		virtual void	execute(const Bureaucrat& executor) const; // zo doen?

		void			setEx();

		class Signed : public std::exception {
			virtual const char* what() const throw();
		};
		class notSigned : public std::exception {
			virtual const char* what() const throw();
		};
		class exLo : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream&		operator<<(std::ostream& o, const Form& rhs);

#endif


// #ifndef FORM_HPP
// # define FORM_HPP

// # include <string>
// # include <iostream>
// # include "Bureaucrat.hpp"

// class Bureaucrat;

// class Form
// {
// 	private:

// 		std::string		_name;
// 		int				_exGrade;
// 		int				_signGrade;
// 		bool			_signed;
// 		// bool			_executed;

// 	protected:
// 		Form() {}

// 	public:
// 		Form(std::string n, int signG, int exG);
// 		virtual ~Form();
// 		Form(const Form& rhs);
// 		Form&		operator=(const Form& rhs);
// 		void		beSigned(const Bureaucrat& rhs);

// 		class exHi : public std::exception {
// 			virtual const char* what() const throw();
// 		};
// 		class exLo : public std::exception {
// 			virtual const char* what() const throw();
// 		};

// 		std::string		getName() const;
// 		bool			getSigned() const;
// 		bool			getEx() const;
// 		int				getExGrade() const;
// 		int				getSignGrade() const;
// 		virtual void	execute(const Bureaucrat& executor) const; // zo doen?
// };

// std::ostream&		operator<<(std::ostream& o, const Form& rhs);

// #endif
