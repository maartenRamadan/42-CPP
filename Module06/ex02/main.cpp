#include "Header.hpp"

Base*
generate()
{
	static int r;
	if (r == 0)
	{
		srand(time(NULL));
		r = 1;
	}
	int i = rand() % 3 + 1;
	if (i == 1)
		return (new A);
	if (i == 2)
		return (new B);
	else
		return (new C);
}

void
identify_from_pointer(Base* p)
{
	if (!p)
		return ;
	try
	{
		A& tmpA = dynamic_cast<A&>(*p);
		(void)tmpA;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& bc)
	{
		try
		{
			B& tmpB = dynamic_cast<B&>(*p);
			(void)tmpB;
			std::cout << "B" << std::endl;
		}
		catch (...)
		{
			try
			{
				C& tmpC = dynamic_cast<C&>(*p);
				(void)tmpC;
				std::cout << "C" << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

void
identify_from_reference(Base& p)
{
	try
	{
		A& tmpA = dynamic_cast<A&>(p);
		(void)tmpA;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& bc)
	{
		try
		{
			B& tmpB = dynamic_cast<B&>(p);
			(void)tmpB;
			std::cout << "B" << std::endl;
		}
		catch (...)
		{
			try
			{
				C& tmpC = dynamic_cast<C&>(p);
				(void)tmpC;
				std::cout << "C" << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

int
main()
{
	Base* b = generate();
	identify_from_pointer(b);

	Base& c = (*generate());
	identify_from_reference(c);
	return (0);
}
