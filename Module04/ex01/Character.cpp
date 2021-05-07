#include "Character.hpp"

Character::Character() { return ; }

Character::Character(const std::string& n)
: name(n), AP(40), weapon(NULL)
{
	std::cout << "Character " << this->name << " constructed" << std::endl;
	return ;
}

Character::Character(const Character& rhs)
{
	*this = rhs;
	return ;
}

Character::~Character()
{
	std::cout << "Character " << this->name << " destructed" << std::endl;
	return ;
}

Character&
Character::operator=(const Character& rhs)
{
	this->name = rhs.name;
	if (rhs.weapon)
		this->weapon = rhs.weapon;
	return *this;
}

std::string			Character::getName() const
{
	return this->name;
}

int					Character::getAP() const
{
	return this->AP;
}

AWeapon				*Character::getWeapon() const
{
	return this->weapon;
}

void
Character::recoverAP()
{
	if (this->AP + 10 >= 40)
	{
		this->AP = 40;
		std::cout << "Reached max of 40 AP" << std::endl;
	}
	else
	{
		this->AP += 10;
		std::cout << "10 AP recovered, AP = " << this->AP << std::endl;
	}
	return ;
}

void
Character::attack(Enemy* target)
{
	if (!this->weapon)
		std::cout << "No weapon" << std::endl;
	else if (!target)
		std::cout << "No target" << std::endl;
	else if (this->AP < this->weapon->getAPCost())
		std::cout << "Insufficient AP" << std::endl;
	else
	{
		std::cout	<< this->name << " attacks " << target->getType() 
					<< " with a " << this->weapon->getName() << std::endl;
		this->AP -= this->weapon->getAPCost();
		this->weapon->attack();
		target->takeDamage(this->weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
	}
	return ;
}

void
Character::equip(AWeapon* weapon)
{
	if (!weapon)
		std::cout << "No weapon" << std::endl;
	else
	{
		std::cout << "Weapon equiped" << std::endl;
		this->weapon = weapon;
	}
	return ;
}

std::ostream&
operator<<(std::ostream& o, const Character& rhs)
{
	if (rhs.getWeapon())
		o 	<< rhs.getName() << " has " << rhs.getAP() 
			<< " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o	<< rhs.getName() << " has " << rhs.getAP() 
			<< " AP and is unarmed" << std::endl;
	return o;
}
