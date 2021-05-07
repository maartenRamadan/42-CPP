#ifndef HumanA_HPP
#define HumanA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void			attack();

	private:
		std::string		_name;
		Weapon&			_weaponA;
		
};

#endif