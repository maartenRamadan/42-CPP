#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	Character();
	
	std::string			_name;
	AMateria*			_inventory[4];
	int					_count;

	public:
		Character(std::string);
		Character(const Character& rhs);
		~Character();
		Character&			operator=(const Character& rhs);

		const std::string&	getName() const;
		
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		void				printInventory();
};

std::ostream&				operator<<(std::ostream o, const ICharacter& rhs);
