#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string n);
		FragTrap(const FragTrap& rhs);
		~FragTrap();
		FragTrap		&operator=(const FragTrap& rhs);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);

		void			vaulthunter_dot_exe(const std::string& target);
		unsigned int	getVaulthunterDamage();

		void			hurlingBaby(const std::string& target);
		void			judoChop(const std::string& target);
		void			shinKick(const std::string& target);
		void			squareNuts(const std::string& target);
		void			barbaSlam(const std::string& target);

	private:
		FragTrap() {}

		unsigned int	VaulthunterDamage;
};

#endif
