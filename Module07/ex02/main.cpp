#include "Array.hpp"

int main()
{
	Array<int> test(4);

	for (int i = 0; i < 4; i++)
		std::cout << test[i] << std::endl;
	std::cout << std::endl;
	
	Array<int> test2(test);

	for (int i = 0; i < 4; i++)
		std::cout << test2[i] << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 4; i++)
		test2[i] = 3;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << test2[i] << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << test[i] << std::endl;
	std::cout << std::endl;

	Array<int> test3 = test2;

	try	{
		for (int i = 0; i < 6; i++)
			std::cout << test3[i] << std::endl;
	}
	catch (const std::exception &e)	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks array | grep bytes");
}
