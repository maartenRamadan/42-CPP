#include "ScaleConv.hpp"

int		main(int argc, char *argv[])
{
	float d;
	int precision;

	if (argc == 2)
	{
		ScaleConv conv;
	
		try	{
			d = conv.prep(argv[1]);
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
			return (1);
		}

		try {
			char c = conv.convChar(d);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		catch (const std::string& s) {
			std::cout << "char: " << s << std::endl;
		}

		try {
			std::cout << "int: " << conv.convInt(d) << std::endl;
		}
		catch (const std::string& s) {
			std::cout << s << std::endl;
		}

		float f = conv.convFloat(d);
		precision = strlen(argv[1]) - 1;
		if (d < 0)
			precision -= 1;
		std::cout << "float : ";
		if (f == std::numeric_limits<float>::infinity())
			std::cout << "+";
		if (f - (int)f != (float)0)
			std::cout << std::setprecision(precision) << f << "f" << std::endl;
		else
			std::cout << f << ".0f" << std::endl;

		std::cout << "double : ";
		if (f == std::numeric_limits<float>::infinity())
			std::cout << "+";
		if (d - (int)d != (double)0)
			std::cout << std::setprecision(precision) << d << std::endl;
		else
			std::cout << d << ".0" << std::endl;
	}
	else
		std::cout << "invalid number of arguments" << std::endl;
	return (0);
}
