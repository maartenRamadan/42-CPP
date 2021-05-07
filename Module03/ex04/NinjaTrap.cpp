#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->EP = 120;
	this->maxEP = 120;
	this->meleeDamage = 60;
	std::cout << "NinjaTrap constructed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap& rhs)
{
	*this = rhs;
	std::cout << "NinjaTrap copied" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << this->name << " destroyed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string n)
{
	this->name = n;
	this->HP = 60;
	this->maxHP = 60;
	this->EP = 120;
	this->maxEP = 120;
	this->level = 1;
	this->meleeDamage = 60;
	this->rangeDamage = 5;
	this->armor = 0;
	std::cout << "NinjaTrap " << this->name << " succesfully constructed" << std::endl;
	return ;
}

NinjaTrap&
NinjaTrap::operator=(const NinjaTrap& rhs)
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
NinjaTrap::rangedAttack(const std::string& target)
{
	if (this->HP == 0)
		std::cout << "NinjaTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "NinjaTrap " << this->name << " fires range attack at " << target << std::endl;
	return ;
}

void
NinjaTrap::meleeAttack(const std::string& target)
{
	if (this->HP == 0)
		std::cout << "NinjaTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "NinjaTrap " << this->name << " does melee attack at " << target << std::endl;
	return ;
}

void
NinjaTrap::ninjaShoeBox(FragTrap& rhs)
{
	std::cout << this->name << " smacks " << rhs.getName()
			<< " in the freakin face and does " << this->getMeleeDamage() << " damage" << std::endl;
    rhs.takeDamage(this->getMeleeDamage());
}

void
NinjaTrap::ninjaShoeBox(ScavTrap& rhs)
{
    std::cout << this->name << " steals " << rhs.getName()
            << "'s shoe and runs off laughing" << std::endl;
}

void
NinjaTrap::ninjaShoeBox(ClapTrap& rhs)
{
    std::cout << this->name << " throws turd at " << rhs.getName() << " and does "
            << this->getRangeDamage() << " damage" << std::endl;
    rhs.takeDamage(this->getRangeDamage());
}

void
NinjaTrap::ninjaShoeBox(NinjaTrap& rhs)
{
	static int check = 0;
	if (check == 0)
	{
		srand(time(NULL));
		check++;
	}
	if ((rand() % 100) > 50)
	{
		std::cout << this->name << " finds sandwich, eats it and gains 10 EP" << std::endl;
        this->EP += 10;
	}
	else
	{
		std::cout << rhs.getName() << " finds sandwich, eats it and gains 10 EP" << std::endl;
        rhs.EP += 10;
	}
}