#include "easyfind.hpp"
#include <list>
#include <vector>
#include <array>

void	print(int& i) { std::cout << i << std::endl; }

void	fill(int& i) { i = rand() % 9; }

int		main()
{
	srand(time(NULL));
	std::array<int, 7> array;

	std::for_each(array.begin(), array.end(), fill);
	// std::for_each(array.begin(), array.end(), print);
	
	easyFind(array, 5);

	std::list<int> lst;
	for (int i = 0; i < 1000; i++)
		lst.push_back(rand() % 1000);
	
	easyFind(lst, 11);

	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 9);

	easyFind(vec, 7);
	return (0);
}
