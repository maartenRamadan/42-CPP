#include "ScavTrap.hpp"

typedef void(ScavTrap::* Functions)();

ScavTrap::ScavTrap(std::string n) : _name(n)
{
	this->_HP = 100;
	this->_maxHP = 100;
	this->_EP = 50;
	this->_maxEP = 50;
	this->_level = 1;
	this->_meleeDamage = 20;
	this->_rangeDamage = 15;
	this->_armor = 3;
	std::cout << "ScavTrap " << this->_name << " succesfully constructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap " << this->_name << " copied" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
	return ;
}

ScavTrap&
ScavTrap::operator=(ScavTrap const &rhs)
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
    return (*this);
}

void		
ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_HP == 0)
		std::cout << "ScavTrap " << this->_name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " fires range attack at " << target << std::endl;
	return ;
}

void
ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_HP == 0)
		std::cout << "ScavTrap " << this->_name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " does melee attack at " << target << std::endl;
	return ;
}

void
ScavTrap::takeDamage(unsigned int amount)
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
ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == this->_maxHP)
		std::cout << "ScavTrap " << this->_name << " attempts repair but HP is already at max" << std::endl;
	else if (this->_HP + amount > this->_maxHP)
	{
		this->_HP = this->_maxHP;
		std::cout << "ScavTrap " << this->_name << " restored his HP, max of " << this->_maxHP << " HP reached" << std::endl;	
	}
	else
	{
		this->_HP += amount;
		std::cout << "ScavTrap " << this->_name << " does repair, " << amount << " HP added, new HP level: " << this->_HP << std::endl;
	}
	return ;
}

std::string&
ScavTrap::getName()
{
	return (this->_name);
}

unsigned int
ScavTrap::getMeleeDamage()
{
	return (this->_meleeDamage);
}

unsigned int
ScavTrap::getRangeDamage()
{
	return (this->_rangeDamage);
}

void
ScavTrap::challangeNewComer(const std::string& target)
{
	static int check = 0;
	if (check == 0)
	{
		srand(time(NULL));
		check++;
	}
	Functions challange[] = {
		&ScavTrap::iceBucket,
		&ScavTrap::cinnamon,
		&ScavTrap::blindfoldDrawing,
		&ScavTrap::cheesecracker,
		&ScavTrap::sourLemon,
	};
	if (this->_EP >= 25)
	{
		this->_EP -= 25;
		std::cout << "Hello " << target << ", here is a random challange: ";
		(this->*challange[rand() % 5])();
	}
	else
		std::cout << this->_name << " has insufficient EP for extending a challange" << std::endl;
}

void
ScavTrap::iceBucket()
{
	std::cout << "Throw a bucket of ice over your head" << std::endl;
	return ;
}

void
ScavTrap::cinnamon()
{
	std::cout << "Eat a spoonful of ground cinnamon in 60 seconds without water" << std::endl;
	return ;
}

void
ScavTrap::blindfoldDrawing()
{
	std::cout << "Paint your dreams, only blindfolded" << std::endl;
	return ;
}

void
ScavTrap::cheesecracker()
{
	std::cout << "Build a cheese cracker house" << std::endl;
	return ;
}

void
ScavTrap::sourLemon()
{
	std::cout << "Eat a sour lemon without making any expression or cringing" << std::endl;
	return ;
}
