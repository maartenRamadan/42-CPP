#pragma once

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	AMateria();

	std::string				_name;
	unsigned int 			_xp;

	public:
		AMateria(const std::string& type);
		AMateria(const AMateria& rhs);
		virtual ~AMateria();
		AMateria&				operator=(const AMateria& rhs);

		const std::string& 		getType() const;
		unsigned int 			getXP() const;

		virtual AMateria* 		clone() const = 0;
		virtual void 			use(ICharacter& target);
};
