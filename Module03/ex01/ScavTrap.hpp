#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <sstream>

class ScavTrap
{
	public:
		ScavTrap(std::string n);
		ScavTrap(const ScavTrap &rhs);
		~ScavTrap();
		ScavTrap		&operator=(const ScavTrap& rhs);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		void			challangeNewComer(const std::string& target);

		void			iceBucket();
		void			cinnamon();
		void			blindfoldDrawing();
		void			cheesecracker();
		void			sourLemon();

		std::string&	getName();
		unsigned int	getMeleeDamage();
		unsigned int	getRangeDamage();

	private:
		ScavTrap() {}

		std::string		_name;
		unsigned int	_HP;
		unsigned int	_maxHP;
		unsigned int	_EP;
		unsigned int	_maxEP;
		unsigned int	_level;
		unsigned int	_meleeDamage;
		unsigned int	_rangeDamage;
		unsigned int	_armor;
};

#endif
