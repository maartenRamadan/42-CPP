#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	void			meleeAttack(const std::string& target);

	public:
		NinjaTrap(std::string n);
		NinjaTrap(const NinjaTrap& rhs);
		virtual ~NinjaTrap();
		NinjaTrap&		operator=(const NinjaTrap& rhs);
		
		void			ninjaShoeBox(FragTrap& rhs);
		void			ninjaShoeBox(ScavTrap& rhs);
		void			ninjaShoeBox(ClapTrap& rhs);
		void			ninjaShoeBox(NinjaTrap& rhs);

	protected:
		NinjaTrap();

		void			rangedAttack(const std::string& target);
};

#endif
