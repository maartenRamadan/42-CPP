#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string t);
		~Weapon();
	
		void				setType(std::string t);
		std::string const&	getType();


	private:
		std::string _type;
};

#endif