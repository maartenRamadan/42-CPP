#ifndef HUMAN_HPP
#define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
	
		const Brain*	identify() const;
		const Brain&	getBrain() const;

	private:
		const Brain	_myBrain;
};

#endif