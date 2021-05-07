/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Marty <Marty@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 10:28:01 by Marty         #+#    #+#                 */
/*   Updated: 2021/01/14 18:29:17 by Marty         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t)
: _name(n), _type(t) {	
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "< " << this->_name << " got shot in the face" << std::endl;
}

void
Zombie::announce() {
	std::cout	<< "> " << this->_name << " (" << this->_type << ") says: "
				<< "Haaaaaai :D" << std::endl;
}
