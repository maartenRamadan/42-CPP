#include "Brain.hpp"

Brain::Brain()
{ 
	std::cout << "Brain spawned" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain unspawned" << std::endl;
	return ;
}

const Brain*
Brain::identify() const
{
	return (this);
}
