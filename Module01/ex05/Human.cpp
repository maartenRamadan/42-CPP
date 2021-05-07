#include "Human.hpp"

Human::Human()
{
	std::cout << "Human created" << std::endl;
	return ;
}

Human::~Human()
{
	std::cout << "Human decreated" << std::endl;
	return ;
}

const Brain&
Human::getBrain() const
{
	return this->_myBrain;
}

const Brain*
Human::identify() const
{
	return this->_myBrain.identify();
}
