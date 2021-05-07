/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Marty <Marty@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 17:01:08 by Marty         #+#    #+#                 */
/*   Updated: 2021/01/19 12:52:13 by Marty         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

int				Contact::get_nb() { return (this->_nb); }

void			Contact::add(int nb)
{
	this->_nb = nb;
	std::cout << "Firstname: ";
	std::getline(std::cin, this->_firstName, '\n');
	std::cout << "Lastname: ";
	std::getline(std::cin, this->_lastName, '\n');
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname, '\n');
	std::cout << "Login: ";
	std::getline(std::cin, this->_login, '\n');
	std::cout << "Postal Address: ";
	std::getline(std::cin, this->_postAdd, '\n');
	std::cout << "E-mail Address: ";
	std::getline(std::cin, this->_email, '\n');
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->_phone, '\n');
	std::cout << "Date of birth: ";
	std::getline(std::cin, this->_DoB, '\n');
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->_meal, '\n');
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->_underwear, '\n');
	std::cout << "Your darkest secret: ";
	std::getline(std::cin, this->_secret, '\n');
	return ;
}

void			Contact::print(void)
{
	std::cout << "- Firstname: " 		<< this->_firstName 	<< '\n';
	std::cout << "- Lastname: " 		<< this->_lastName 		<< '\n';
	std::cout << "- Nickname: " 		<< this->_nickname 		<< '\n';
	std::cout << "- Login: " 			<< this->_login 		<< '\n';
	std::cout << "- Postal Address: " 	<< this->_postAdd 		<< '\n';
	std::cout << "- E-mail Address: " 	<< this->_email 		<< '\n';
	std::cout << "- Phone Number: " 	<< this->_phone 		<< '\n';
	std::cout << "- Date of birth: " 	<< this->_DoB 			<< '\n';
	std::cout << "- Favorite meal: " 	<< this->_meal 			<< '\n';
	std::cout << "- Underwear color: " 	<< this->_underwear 	<< '\n';
	std::cout << "- Darkest secret: " 	<< this->_secret 		<< '\n';
}

std::string		truncate_string(std::string str)
{
	if (str.length() > 10)
    {
        str.resize(9);
        str += ".";
    }
	return (str);
}

void			Contact::print_preview(void) const
{
	std::cout <<	std::setw(10) << this->_nb 								<< '|' <<
					std::setw(10) << truncate_string(this->_firstName)		<< '|' <<
					std::setw(10) << truncate_string(this->_lastName)		<< '|' <<
					std::setw(10) << truncate_string(this->_nickname)		<< '\n';
}
