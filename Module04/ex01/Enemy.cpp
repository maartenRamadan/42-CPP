#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int h, const std::string& t)
: hp(h), type(t)
{
	std::cout << "Enemy created" << std::endl;
	return ;
}

Enemy::Enemy(const Enemy& rhs)
{
	*this = rhs;
	return ;
}

Enemy::~Enemy()
{
	std::cout << "Enemy destructed" << std::endl;
	return ;
}

Enemy&
Enemy::operator=(const Enemy& rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}

int		
Enemy::getHP() const
{
	return this->hp;
}

std::string
Enemy::getType() const
{
	return this->type;
}

void
Enemy::takeDamage(int damage)
{
	if (this->hp <= 0)
		std::cout << "This enemy is already dead" << std::endl;
	else
	{
		this->hp -= damage;
		if (this->hp <= 0)
			std::cout << this->getType() << " took a fatal hit" << std::endl;
		else
			std::cout 	<< this->type << " took " << damage << " damage. "
						<< this->hp << " HP left" << std::endl;
	}
	return ;
}

std::ostream&
operator<<(std::ostream& o, const Enemy& rhs)
{
	o << rhs.getType() << ", " << rhs.getHP() << std::endl;
	return o;
}
