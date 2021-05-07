#pragma once

# include <iostream>
# include <sstream>
# include "ISpaceMarine.hpp"

class Gappie : public ISpaceMarine
{
	public:
		Gappie();
		Gappie(const Gappie& rhs);
		virtual	~Gappie();
		Gappie&		operator=(const Gappie& rhs);
		
		Gappie* 				clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;
};
