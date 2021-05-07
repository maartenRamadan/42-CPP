#pragma once

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& rhs);
		virtual ~Cure();
		Cure&					operator=(const Cure& rhs);

		Cure* 					clone() const;
};

