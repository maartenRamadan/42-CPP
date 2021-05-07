#include "Sorcerer.hpp"
#include "Guy.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	std::cout << std::endl;

	Victim jim("Jimmy");
	Peon joe("Joe");
	Guy patrick("Patrick");
	std::cout << std::endl;

	std::cout << robert << jim << joe << patrick;
	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(patrick);
	std::cout << std::endl;

	return (0);
}