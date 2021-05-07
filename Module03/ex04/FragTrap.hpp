#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
	unsigned int	VaulthunterDamage;

	void			meleeAttack(const std::string& target);

	public:
		FragTrap(std::string n);
		FragTrap(const FragTrap& rhs);
		virtual ~FragTrap();
		FragTrap&		operator=(const FragTrap& rhs);

		void			vaulthunter_dot_exe(const std::string& target);
		unsigned int	getVaulthunterDamage();

		void			hurlingBaby(const std::string& target);
		void			judoChop(const std::string& target);
		void			shinKick(const std::string& target);
		void			squareNuts(const std::string& target);
		void			barbaSlam(const std::string& target);

	protected:
		FragTrap();
		
		void			rangedAttack(const std::string& target);
};

#endif
