#include "Monster.hpp"

Monster::Monster() : Enemy(170, "Monster")
{
	std::cout << "Biegabagaboegoe!" << std::endl;
	return ;
}

Monster::Monster(const Monster& rhs)
{
	*this = rhs;
	return ;
}

Monster::~Monster()
{
	std::cout << "Blehhgh..." << std::endl;
	return ;
}

Monster&
Monster::operator=(const Monster& rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}

void
Monster::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 5);
	return ;
}