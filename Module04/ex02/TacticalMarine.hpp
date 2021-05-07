#pragma once

# include <iostream>
# include <sstream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& rhs);
		virtual	~TacticalMarine();
		TacticalMarine&		operator=(const TacticalMarine& rhs);
		
		TacticalMarine* 	clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};
