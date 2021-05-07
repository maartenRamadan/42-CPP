#include <iostream>

void	memoryLeak(void)
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

// int		main(void)
// {
// 	try {
// 		memoryLeak();
// 	}
// 	catch (const std::exception &e)	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	system("leaks a.out");
// 	return (0);
// }