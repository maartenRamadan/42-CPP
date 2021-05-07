#include "span.hpp" 

void	print(int i) { std::cout << i << std::endl; }

int		main()
{
	srand(time(NULL));
	std::vector<int> vect(100);
	Span span(200);

	std::cout << "=== SPAN 1 ===" << std::endl;

	for (int i = 0; i < 100; i++)
		vect[i] = rand() % 10000;

	span.addNumber<std::vector<int> >(vect.begin(), vect.end());
	// std::for_each(vect.begin(), vect.end(), print);

	std::cout << "short: " << span.shortestSpan() << std::endl;
	std::cout << "long: "  << span.longestSpan() << std::endl;
	
	std::cout << std::endl << "=== SPAN 2 ===" << std::endl;

	Span span2(2000);

	for (int i = 0; i < 2000; i++)
		span2.addNumber(rand() % 10000000);

	std::cout << "short: " << span2.shortestSpan() << std::endl;
	std::cout << "long: "  << span2.longestSpan() << std::endl;

	std::cout << std::endl << "=== SPAN 3 ===" << std::endl;

	Span span3(1);
	try {
		span3.addNumber(123);
		std::cout << "short: " << span3.shortestSpan() << std::endl;
		std::cout << "long: "  << span3.longestSpan() << std::endl;
	}
	catch (const std::exception& e)	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "=== SPAN 4 ===" << std::endl;

	Span span4(20);
	try {
		std::cout << "short: " << span4.shortestSpan() << std::endl;
		std::cout << "long: "  << span4.longestSpan() << std::endl;
	}
	catch (const std::exception& e)	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "=== SPAN 5 ===" << std::endl;

	Span span5(10);

	try {
		for (int i = 0; i < 12; i++)
			span5.addNumber(rand() % 10000000);
	}
	catch (const std::exception& e)	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
