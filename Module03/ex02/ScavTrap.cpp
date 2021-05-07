#include "ScavTrap.hpp"

typedef void(ScavTrap::* Functions)();

ScavTrap::ScavTrap(std::string n)
{
	this->name = n;
	this->HP = 100;
	this->maxHP = 100;
	this->EP = 50;
	this->maxEP = 50;
	this->level = 1;
	this->meleeDamage = 20;
	this->rangeDamage = 15;
	this->armor = 3;
	std::cout << "ScavTrap " << this->name << " succesfully constructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "ScavTrap copied" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " destroyed" << std::endl;
	return ;
}

ScavTrap&
ScavTrap::operator=(ScavTrap const &rhs)
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
ScavTrap::rangedAttack(std::string const & target)
{
	if (this->HP == 0)
		std::cout << "ScavTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " fires range attack at " << target << std::endl;
	return ;
}

void
ScavTrap::meleeAttack(std::string const & target)
{
	if (this->HP == 0)
		std::cout << "ScavTrap " << this->name << " is dead right now... Try again later." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " does melee attack at " << target << std::endl;
	return ;
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
	if (this->EP >= 25)
	{
		this->EP -= 25;
		std::cout << "Hello " << target << ", here is a random challange: ";
		(this->*challange[rand() % 5])();
	}
	else
		std::cout << this->name << " has insufficient EP for extending a challange" << std::endl;
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
