/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Marty <Marty@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 10:28:16 by Marty         #+#    #+#                 */
/*   Updated: 2021/01/20 12:40:08 by Marty         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(std::string n, std::string t);
		~Zombie();
	
		void			announce();

	private:
		std::string 	_name;
		std::string 	_type;
};

#endif