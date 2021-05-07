#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:
		Bureaucrat() {}

		int				_grade;
		std::string		_name;

	public:
		Bureaucrat(std::string n, int g);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat&		operator=(const Bureaucrat& rhs);

		std::string		getName() const;
		int				getGrade() const;
		
		void			increment();
		void			decrement();

		class HiEx : public std::exception {
				virtual const char*	what() const throw();
		};
		class LoEx : public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&			operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
