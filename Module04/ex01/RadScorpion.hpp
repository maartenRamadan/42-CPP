#pragma once

# include "Enemy.hpp"
# include <iostream>
# include <sstream>

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& rhs);
		virtual ~RadScorpion();
		RadScorpion&		operator=(const RadScorpion& rhs);
};
