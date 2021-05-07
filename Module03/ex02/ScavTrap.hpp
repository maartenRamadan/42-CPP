#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string n);
		ScavTrap(const ScavTrap& rhs);
		~ScavTrap();
		ScavTrap&		operator=(const ScavTrap& rhs);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);

		void			challangeNewComer(const std::string& n);

		void			iceBucket();
		void			cinnamon();
		void			blindfoldDrawing();
		void			cheesecracker();
		void			sourLemon();

	private:
		ScavTrap() {}
};

#endif
