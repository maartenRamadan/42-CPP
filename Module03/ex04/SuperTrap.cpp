#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n)
{
	this->name = n;
	std::cout << "SuperTrap " << FragTrap::getName() << " constructed" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const SuperTrap& rhs)
{
	*this = rhs;
	std::cout << "SuperTrap copied" << std::endl;
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << NinjaTrap::getName() << " destroyed" << std::endl;
	return ;
}

SuperTrap&
SuperTrap::operator=(const SuperTrap& rhs)
{
	this->name = rhs.name;
	this->HP = rhs.HP;
	this->maxHP = rhs.maxHP;
	this->EP = rhs.EP;
	this->maxEP = rhs.maxEP;
	this->meleeDamage = rhs.meleeDamage;
	this->rangeDamage = rhs.rangeDamage;
	this->armor = rhs.armor;
    return (*this);
}

// void		
// SuperTrap::rangedAttack(const std::string& target)
// {
// 	if (this->HP == 0)
// 		std::cout << "SuperTrap " << this->name << " is dead right now... Try again later." << std::endl;
// 	else
// 		std::cout << "SuperTrap " << this->name << " fires range attack at " << target << std::endl;
// 	return ;
// }

// void
// SuperTrap::meleeAttack(const std::string& target)
// {
// 	if (this->HP == 0)
// 		std::cout << "SuperTrap " << this->name << " is dead right now... Try again later." << std::endl;
// 	else
// 		std::cout << "SuperTrap " << this->name << " does melee attack at " << target << std::endl;
// 	return ;
// }

int		
SuperTrap::getMaxHP() { return (this->maxHP); }

int				
SuperTrap::getEP() { return (this->EP); }

int				
SuperTrap::getMaxEP() { return (this->maxEP); }

int				
SuperTrap::getLevel() { return (this->level); }

int				
SuperTrap::getMAD() { return (this->meleeDamage); }

int				
SuperTrap::getRAD() { return (this->rangeDamage); }

int				
SuperTrap::getArmor() { return (this->armor); }
