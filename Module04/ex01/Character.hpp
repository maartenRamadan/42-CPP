#pragma once

# include <iostream>
# include <sstream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character();

		std::string		name;
		int				AP;
		AWeapon*		weapon;
		
	public:
		Character(const std::string& rhs);
		Character(const Character& rhs);
		~Character();
		Character&		operator=(const Character& rhs);

		void			recoverAP();
		void			equip(AWeapon* weapon);
		void			attack(Enemy* target);
		
		std::string 	getName() const;
		int			 	getHP() const;
		int			 	getAP() const;
		AWeapon*		getWeapon() const;
};

std::ostream&		operator<<(std::ostream& o, const Character& rhs);
