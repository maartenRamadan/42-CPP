#pragma once

# include <iostream>

class NotFound : public std::exception
{
    virtual const char* what() const throw() { return ("Didn't find it"); }
};

template <typename T>
void		easyFind(T& cont, int nb)
{
	typename T::iterator tmp;
	
	try
	{
		tmp = std::find(cont.begin(), cont.end(), nb);
		if (tmp == cont.end())
			throw NotFound();
		std::cout << "Found it" << std::endl;		
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
};
