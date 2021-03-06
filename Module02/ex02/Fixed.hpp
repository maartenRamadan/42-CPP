#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);

		Fixed				&operator=(Fixed const &rhs);
		bool				operator>(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;

		Fixed				operator+(Fixed const &rhs) const;
		Fixed				operator-(Fixed const &rhs) const;
		Fixed				operator*(Fixed const &rhs) const;
		Fixed				operator/(Fixed const &rhs) const;
		Fixed				operator++(void);
		Fixed				operator++(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					_value;
		static const int	_fraction;
};

std::ostream& operator<<(std::ostream &o, Fixed const& rhs);

#endif
