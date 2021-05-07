#include "FragTrap.hpp"

typedef void(FragTrap::* Functions)(std::string const &target);

FragTrap::FragTrap(std::string n) : _name(n)
{
	std::cout << "Contructor called" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_EP = 100;
	this->_maxEP = 100;
	this->_level = 1;
	this->_meleeDamage = 30;
	this->_rangeDamage = 20;
	this->_armor = 5;
	this->_VaulthunterDamage = 40;
	return ;
}

FragTrap::FragTrap(const FragTrap& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

FragTrap&
FragTrap::operator=(FragTrap const& rhs)
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_maxHP = rhs._maxHP;
	this->_EP = rhs._EP;
	this->_maxEP = rhs._maxEP;
	this->_level = rhs._level;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangeDamage = rhs._rangeDamage;
	this->_armor = rhs._armor;
	this->_VaulthunterDamage = rhs._VaulthunterDamage;
    return (*this);
}

void		
FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "Ranged attack at " << target << std::endl;
	return ;
}

void
FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "Melee attack at " << target << std::endl;
	return ;
}

void
FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "No damage to be done" << std::endl;
	else
	{
		unsigned int damageDone = amount - this->_armor;
		if (this->_HP == 0)
		{
			std::cout << this->_name << " is already dead..." << std::endl;
			return ;
		}
		if (this->_HP < damageDone)
			this->_HP = 0;
		else
			this->_HP -= damageDone;
		if (this->_HP == 0)
			std::cout << "Fatal hit, " << this->_name << " killed" << std::endl;
		else
			std::cout << this->_name << " took a hit of "<< amount << ", damage done: " << damageDone << ", remaining HP: " << this->_HP << std::endl;	
	}
	return ;
}

void
FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == this->_maxHP)
		std::cout << this->_name << " attempts repair but HP is already at max" << std::endl;
	else if (this->_HP + amount > this->_maxHP)
	{
		this->_HP = this->_maxHP;
		std::cout << this->_name << " restored his HP, max of " << this->_maxHP << " HP reached" << std::endl;	
	}
	else
	{
		this->_HP += amount;
		std::cout << this->_name << " does repair, " << amount << " HP added, new HP level: " << this->_HP << std::endl;
	}
	return ;
}

std::string&
FragTrap::getName()
{
	return (this->_name);
}

unsigned int
FragTrap::getMeleeDamage()
{
	return (this->_meleeDamage);
}

unsigned int
FragTrap::getRangeDamage()
{
	return (this->_rangeDamage);
}

unsigned int
FragTrap::getHP()
{
	return (this->_HP);
}

void
FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	static int check = 0;
	if (check == 0)
	{
		srand(time(NULL));
		check++;
	}
	Functions attacks[] = {
		&FragTrap::hurlingBaby,
		&FragTrap::judoChop,
		&FragTrap::shinKick,
		&FragTrap::squareNuts,
		&FragTrap::barbaSlam,
	};
	std::cout << this->_name << " attempts Vaulthunter attack at " << target << std::endl;
	if (this->_EP >= 25)
	{
		(this->*attacks[rand() % 5])(target);
	}
	else
		std::cout << "But " << this->_name << " has insufficient EP" << std::endl;
}

void
FragTrap::hurlingBaby(const std::string& target)
{
	std::cout << "Vaulthunter attack succesfull, " << target << " got hit with a hurling baby!" << std::endl;
	return ;
}

void
FragTrap::judoChop(const std::string& target)
{
	std::cout << "Vaulthunter attack succesfull, " << target << " got hit with a judo chop!" << std::endl;
	return ;
}

void
FragTrap::shinKick(const std::string& target)
{
	std::cout << "Vaulthunter attack succesfull, " << target << " got hit with a kick at the shin!" << std::endl;
	return ;
}

void
FragTrap::squareNuts(const std::string& target)
{
	std::cout << "Vaulthunter attack succesfull, " << target << " got hit square in the nuts!" << std::endl;
	return ;
}

void
FragTrap::barbaSlam(const std::string& target)
{
	std::cout << "Vaulthunter attack succesfull, " << target << " got hit with Barbapapa's bodyslam!" << std::endl;
	return ;
}

unsigned int
FragTrap::getVaulthunterDamage()
{
	if (this->_EP >= 25)
	{
		this->_EP -= 25;
		return (this->_VaulthunterDamage);
	}
	else
		return (0);
}