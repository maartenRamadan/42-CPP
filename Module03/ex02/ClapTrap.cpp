#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->level = 1;
	std::cout << "ClapTrap constructed" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string n) : name(n)
{
	this->HP = 100;
	this->maxHP = 100;
	this->EP = 100;
	this->maxEP = 100;
	this->level = 1;
	this->meleeDamage = 100;
	this->rangeDamage = 100;
	this->armor = 0;
	std::cout << "ClapTrap " << this->name << " constructed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	*this = rhs;
	std::cout << "ClapTrap copied" << std::endl;
	return ;
}

ClapTrap&
ClapTrap::operator=(ClapTrap const &rhs)
{
	this->name = rhs.name;
	this->HP = rhs.HP;
	this->maxHP = rhs.maxHP;
	this->EP = rhs.EP;
	this->maxEP = rhs.maxEP;
	this->level = rhs.level;
	this->meleeDamage = rhs.meleeDamage;
	this->rangeDamage = rhs.rangeDamage;
	this->armor = rhs.armor;
    return (*this);
}

void
ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "No damage to be done" << std::endl;
	else
	{
		unsigned int damageDone = amount - this->armor;
		if (this->HP == 0)
		{
			std::cout << this->name << " is already dead..." << std::endl;
			return ;
		}
		if (this->HP < damageDone)
			this->HP = 0;
		else
			this->HP -= damageDone;
		if (this->HP == 0)
			std::cout << "Fatal hit, " << this->name << " killed" << std::endl;
		else
			std::cout << this->name << " took a hit of "<< amount << ", damage done: " << damageDone << ", remaining HP: " << this->HP << std::endl;	
	}
	return ;
}


void
ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP == this->maxHP)
		std::cout << this->name << " attempts repair but HP is already at max" << std::endl;
	else if (this->HP + amount > this->maxHP)
	{
		this->HP = this->maxHP;
		std::cout << this->name << " restored his HP, max of " << this->maxHP << " HP reached" << std::endl;	
	}
	else
	{
		this->HP += amount;
		std::cout << this->name << " does repair, " << amount << " HP added, new HP level: " << this->HP << std::endl;
	}
	return ;
}

std::string&
ClapTrap::getName()
{
	return (this->name);
}

unsigned int
ClapTrap::getMeleeDamage()
{
	return (this->meleeDamage);
}

unsigned int
ClapTrap::getRangeDamage()
{
	return (this->rangeDamage);
}
