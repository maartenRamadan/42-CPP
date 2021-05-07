#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{

	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed	&operator=(Fixed const &src);
		void	setRawBits(int const raw);
		int		getRawBits() const;

	private:
		int					_value;
		static const int	_fraction;
};

#endif
