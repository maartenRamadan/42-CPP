#include "Squad.hpp"

Squad::Squad() : _head(NULL), _count(0)
{
	std::cout << "Squad constructed" << std::endl;
	return ;
}

Squad::Squad(const Squad& rhs) : _head(NULL), _count(0)
{
	std::cout << "Squad copy constructer called" << std::endl;
	*this = rhs;
	return ;
}

Squad::Squad(const ISquad& rhs) : _head(), _count(0)
{
	std::cout << "ISquad copy constructer called" << std::endl;
	*this = rhs;
	return ;
}

Squad::~Squad()
{
	if (this->_count)
	{
		Container* tmp = NULL;
	
		for (; this->_head; this->_head = tmp) {
			tmp = this->_head->next;
			delete this->_head->soldier;
			delete this->_head;
		}
	}
	std::cout << "Squad destructed" << std::endl;
	return ;
}

Squad&
Squad::operator=(const Squad& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this->_count)
	{
		Container* tmp = NULL;
	
		for (; this->_head; this->_head = tmp) {
			tmp = this->_head->next;
			delete this->_head->soldier;
			delete this->_head;
		}
	}
	this->_count = 0;
	Container* tmp = rhs._head;
	for (; tmp; tmp = tmp->next) {
		this->push(tmp->soldier->clone());
	}
	return *this;
}

int
Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*
Squad::getUnit(int nb) const
{
	if (nb < 0)
		return NULL;
	if (!this->_count)
		std::cout << "Squad has no members yet" << std::endl;
	else if (nb >= this->_count)
		std::cout << "This squad only has " << this->_count << " members" << std::endl;
	else
	{
		Container* tmp = this->_head;
		for (int i = 0; i < nb; ++i)
			tmp = tmp->next;
		return tmp->soldier;
	}
	return NULL;
}

int
Squad::push(ISpaceMarine* noob)
{
	if (!noob)
	{
		std::cout << "No new soldier to be added..." << std::endl;
		return this->_count;
	}
	else
	{
		Container* newMember = new Container;
		newMember->soldier = noob;
		newMember->next = NULL;
	
		if (!this->_count)
			this->_head = newMember;
		else
		{
			Container* tmp = this->_head;
		
			for (; tmp->next; tmp = tmp->next) {
				if (noob == tmp->soldier || noob == tmp->next->soldier)
				{
					std::cout << "Member already exists in squad" << std::endl;
					delete newMember;
					return this->_count;
				}
			}
			tmp->next = newMember;
		}
	}
	this->_count++;
	std::cout << "Member added" << std::endl;
	return this->_count;
}
