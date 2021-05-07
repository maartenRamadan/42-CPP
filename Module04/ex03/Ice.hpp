#pragma once

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& rhs);
		virtual ~Ice();
		Ice&					operator=(const Ice& rhs);

		Ice* 					clone() const;
};

