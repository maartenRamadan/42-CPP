#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
	std::cout << "MateriaSource constructed" << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 && this->_learned[i]; i++)
		delete this->_learned[i];
	std::cout << "MateriaSource destructed" << std::endl;
	return ;
}

MateriaSource&
MateriaSource::operator=(const MateriaSource& rhs)
{
	for (int i = 0;  i < rhs._count; i++) {
		this->_learned[i] = rhs._learned[i];
		this->_count++;
	}
	return *this;
}

void
MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		std::cout << "No materia found" << std::endl;
	else if (this->_count < 4)
	{
		this->_learned[this->_count] = materia;
		this->_count++;
		std::cout << "New materia \""  << materia->getType() << "\" learned" << std::endl;
	}
	else
		std::cout << "Reached max Materia's" << std::endl;
	return ;
}

AMateria*
MateriaSource::createMateria(const std::string& type)
{
	int i = 0;

	while (i < this->_count)
	{
		if (this->_learned[i]->getType() == type)
		{
			std::cout << "Materia of type " << type << " created" << std::endl;
			return this->_learned[i]->clone();
		}
		i++;
	}
	std::cout << "Can't create type " << type << " yet" << std::endl;
	return NULL;
}
