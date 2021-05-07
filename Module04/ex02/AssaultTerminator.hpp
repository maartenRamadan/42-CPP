#pragma once

# include <iostream>
# include <sstream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& rhs);
		virtual	~AssaultTerminator();
		AssaultTerminator&		operator=(const AssaultTerminator& rhs);
		
		AssaultTerminator* 		clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;
};
