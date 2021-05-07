#pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria*			_learned[4];
	int					_count;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& rhs);
		~MateriaSource();
		MateriaSource&			operator=(const MateriaSource& rhs);
	
		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(const std::string& type);
};
