#include "Pony.hpp"

int		main(void)
{
	Pony* Pony = NULL;

	std::cout << "-- Pony on the heap --" << std::endl;
	Pony->pony_on_heap("Fritsie", "Zwart", 32);
	std::cout << std::endl;

	std::cout << "-- Pony on the stack --" << std::endl;
	Pony->pony_on_stack("Henkie", "Bruin", 2);
	return (0);
}
