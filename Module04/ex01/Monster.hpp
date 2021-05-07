#pragma once

# include "Enemy.hpp"
# include <iostream>
# include <sstream>

class Monster : public Enemy
{
	public:
		Monster();
		Monster(const Monster& rhs);
		virtual ~Monster();
		Monster&			operator=(const Monster& rhs);
		
		void				takeDamage(int damage);
};
