#include "Character.hpp"

Character::Character() {}

Character::Character(std::string n) : _name(n), _count(0)
{
	std::cout << "Character constructed" << std::endl;
	return ;
}

Character::Character(const Character& rhs) : _count(0)
{
	std::cout << "Copy constructer called" << std::endl;
	*this = rhs;
	return ;
}

Character&
Character::operator=(const Character& rhs)
{
	std::cout << "Assignation constructer called" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_inventory[i];
	}
	this->_name = rhs.getName();
	for (this->_count = 0; this->_count != rhs._count; this->_count++) {
		this->_inventory[this->_count] = rhs._inventory[this->_count]->clone();
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructed" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_inventory[i];
	}
	return ;
}

const std::string&
Character::getName() const 
{
	return this->_name;
}

void		
Character::equip(AMateria* m)
{
	if (!m)
		std::cout << "No Materia to be added" << std::endl;
	else if (this->_count == 4)
	{
		delete m;
		std::cout << "Inventory is full" << std::endl;
	}
	else
	{
		this->_inventory[this->_count] = m;
		this->_count++;
		std::cout << "New Materia equiped" << std::endl;
	}
	return ;
}

void			
Character::unequip(int idx)
{
	if (idx < 4 && this->_inventory[idx])
	{
		int i = 0;
		for (i = idx; i + 1 < this->_count; i++) {
			this->_inventory[i] = this->_inventory[i + 1];
		}
		this->_inventory[i] = NULL;
		this->_count--;
		std::cout << "Unequip" << std::endl;
	}
	else
		std::cout << "Unequip failed" << std::endl;
	return ;
}

void
Character::use(int idx, ICharacter& target)
{
	ICharacter* tmp = &target;
	if (tmp == NULL)
		std::cout << "No target" << std::endl;
	else if (idx < 0 || idx > this->_count)
		std::cout << "You chose an invalid inventory slot" << std::endl;
	else
	{
		this->_inventory[idx]->use(target);
		std::cout << "XP = " << this->_inventory[idx]->getXP() << std::endl;
	}
	return ;
}

void
Character::printInventory()
{
	for (int i = 0; i < this->_count; i++) {
		std::cout << this->_inventory[i]->getType() << std::endl;
	}
}
