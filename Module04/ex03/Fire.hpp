#pragma once

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(const Fire& rhs);
		virtual ~Fire();
		Fire&					operator=(const Fire& rhs);

		Fire* 					clone() const;
};

