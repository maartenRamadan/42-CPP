#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		FragTrap(std::string n);
		FragTrap(const FragTrap& rhs);
		~FragTrap();
		FragTrap		&operator=(const FragTrap& rhs);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		&getName();
		unsigned int	getMeleeDamage();
		unsigned int	getRangeDamage();
		
		void			vaulthunter_dot_exe(const std::string& target);
		unsigned int	getVaulthunterDamage();

		void			hurlingBaby(const std::string& target);
		void			judoChop(const std::string& target);
		void			shinKick(const std::string& target);
		void			squareNuts(const std::string& target);
		void			barbaSlam(const std::string& target);

	private:
		FragTrap() {}

		std::string		_name;
		unsigned int	_HP;
		unsigned int	_maxHP;
		unsigned int	_EP;
		unsigned int	_maxEP;
		unsigned int	_level;
		unsigned int	_meleeDamage;
		unsigned int	_rangeDamage;
		unsigned int	_armor;
		unsigned int	_VaulthunterDamage;
};

#endif
