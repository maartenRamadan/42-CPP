#include "FragTrap.hpp"

typedef void(FragTrap::* Functions)(std::string const &target);

FragTrap::FragTrap(std::string n)
{
	this->name = n;
	this->HP = 100;
	this->maxHP = 100;
	this->EP = 100;
	this->maxEP = 100;
	this->level = 1;
	this->meleeDamage = 30;
	this->rangeDamage = 20;
	this->armor = 5;
	this->VaulthunterDamage = 40;
	std::cout << "FragTrap " << this->name << " succesfully constructed" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	std::cout << "FragTrap copied" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
	return ;
}

FragTrap&
FragTrap::operator=(const FragTrap& rhs)
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
	this->VaulthunterDamage = rhs.VaulthunterDamage;
    return (*this);
}

void		
FragTrap::rangedAttack(const std::string& target)
{
	if (this->HP == 0)
		std::cout << "FragTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "FragTrap " << this->name << " fires range attack at " << target << std::endl;
	return ;
}

void
FragTrap::meleeAttack(const std::string& target)
{
	if (this->HP == 0)
		std::cout << "FragTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "FragTrap " << this->name << " does melee attack at " << target << std::endl;
	return ;
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
	std::cout << this->name << " attempts Vaulthunter attack at " << target << std::endl;
	if (this->EP >= 25)
	{
		this->EP -= 25;
		(this->*attacks[rand() % 5])(target);
	}
	else
		std::cout << " but " << this->name << " has insufficient EP" << std::endl;
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
	if (this->EP >= 25)
	{
		this->EP -= 25;
		return (this->VaulthunterDamage);
	}
	else
		return (0);
}
