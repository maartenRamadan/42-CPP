#ifndef HumanB_HPP
#define HumanB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon& w);

	private:
		std::string	_name;
		Weapon*		_weaponB;
		
};

#endif