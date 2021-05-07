#pragma once

# include "Enemy.hpp"
# include <iostream>
# include <sstream>

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& rhs);
		virtual ~SuperMutant();
		SuperMutant&		operator=(const SuperMutant& rhs);
		
		void				takeDamage(int damage);
};
