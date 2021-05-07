#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	SuperTrap() {}
	
	public:
		SuperTrap(std::string n);
		SuperTrap(const SuperTrap& rhs);
		~SuperTrap();
		SuperTrap&		operator=(const SuperTrap& rhs);

		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);

		int				getMaxHP();
		int				getEP();
		int				getMaxEP();
		int				getLevel();
		int				getMAD();
		int				getRAD();
		int				getArmor();
};

#endif
