#pragma once

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <sstream>
# include <iomanip>

class ScaleConv
{
	private:

	
	public:
		ScaleConv();
		~ScaleConv();
		ScaleConv(const ScaleConv& rhs);
		ScaleConv&		operator=(const ScaleConv& rhs);

		double				prep(std::string str);
		char				convChar(const float f);
		int					convInt(const float f);
		float				convFloat(const float f);

		class Unconvertable : public std::exception {
			virtual const char* what() const throw();
		};
};
