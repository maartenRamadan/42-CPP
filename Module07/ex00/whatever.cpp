#include <iostream>

template<typename T>
void	swap(T& x, T& y)
{
	T tmp = x;

	x = y;
	y = tmp;
	return ;
}

template<typename T>
T		min(const T& x, const T& y)
{
	return (x >= y ? y : x);
}

template<typename T>
T		max(const T& x, const T& y)
{
	return (x <= y ? y : x);
}

int		main(void)
{
	std::cout << "--- SWAP ---" << std::endl << std::endl;
	{
		std::cout << "<int>" << std::endl;
		int x = 5, y = 8;
		std::cout	<<	"x1: "	<<	x	<<	std::endl
					<<	"y1: "	<<	y	<<	std::endl << std::endl;
		::swap(x, y);
		std::cout	<<	"x2: "	<<	x	<<	std::endl
					<<	"y2: "	<<	y	<<	std::endl << std::endl;
	}
	{
		std::cout << "<char>" << std::endl;
		char x = 'a', y = 'z';
		std::cout	<<	"x1: "	<<	x	<<	std::endl
					<<	"y1: "	<<	y	<<	std::endl << std::endl;
		::swap(x, y);
		std::cout	<<	"x2: "	<<	x	<<	std::endl
					<<	"y2: "	<<	y	<<	std::endl << std::endl;
	}
	{
		std::cout << "<float>" << std::endl;
		float x = 42.987, y = 1.42;
		std::cout	<<	"x1: "	<<	x	<<	std::endl
					<<	"y1: "	<<	y	<<	std::endl << std::endl;
		::swap(x, y);
		std::cout	<<	"x2: "	<<	x	<<	std::endl
					<<	"y2: "	<<	y	<<	std::endl << std::endl;
	}
	{
		std::cout << "<string>" << std::endl;
		std::string x = "str1", y = "str2";
		std::cout	<<	"x1: "	<<	x	<<	std::endl
					<<	"y1: "	<<	y	<<	std::endl << std::endl;
		::swap(x, y);
		std::cout	<<	"x2: "	<<	x	<<	std::endl
					<<	"y2: "	<<	y	<<	std::endl << std::endl;
	}

	std::cout << "--- MIN & MAX ---" << std::endl << std::endl;
	{
		int x = 5, y = 8;
		std::cout	<< "<int> " << "x = " << x << ", y = " << y << std::endl;
		std::cout << "min(x,y) = " << ::min(x, y) << std::endl;
		std::cout << "max(x,y) = " << ::max(x, y) << std::endl << std::endl;
	}
	{
		char x = 'a', y = 'z';
		std::cout << "<char> " << "x = '" << x << "', y = '" << y << "'" << std::endl;
		std::cout << "min(x,y) = " << ::min(x, y) << std::endl;
		std::cout << "max(x,y) = " << ::max(x, y) << std::endl << std::endl;

	}
	{
		float x = 42.987, y = 1.42;
		std::cout	<< "<float> " << "x = " << x << ", y = " << y << std::endl;
		std::cout << "min(x,y) = " << ::min(x, y) << std::endl;
		std::cout << "max(x,y) = " << ::max(x, y) << std::endl << std::endl;
	}
	{
		std::string x = "str1", y = "str2";
		std::cout << "<char> " << "x = \"" << x << "\", y = \"" << y << "\"" << std::endl;
		std::cout << "min(x,y) = " << ::min(x, y) << std::endl;
		std::cout << "max(x,y) = " << ::max(x, y) << std::endl;
	}
	return (0);
}
