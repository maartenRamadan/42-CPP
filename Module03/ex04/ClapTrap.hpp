#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <sstream>

class ClapTrap
{
	public:
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap& rhs);
		virtual ~ClapTrap();
		ClapTrap		&operator=(const ClapTrap& rhs);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		std::string		&getName();
		unsigned int	getMeleeDamage();
		unsigned int	getRangeDamage();
		unsigned int	getHP();
		unsigned int	getEP();
		void			print();

	protected:
		ClapTrap();

		std::string		name;
		unsigned int	HP;
		unsigned int	maxHP;
		unsigned int	EP;
		unsigned int	maxEP;
		unsigned int	level;
		unsigned int	meleeDamage;
		unsigned int	rangeDamage;
		unsigned int	armor;
};

#endif
