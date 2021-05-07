/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: Marty <Marty@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 17:01:29 by Marty         #+#    #+#                 */
/*   Updated: 2021/01/19 12:53:09 by Marty         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:

		Contact();
		~Contact();
		
		void	add(int nb);
		void	print_preview() const;
		void	print();
		int		get_nb();

	private:
		int			_nb;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postAdd;
		std::string	_email;
		std::string	_phone;
		std::string	_DoB;
		std::string	_meal;
		std::string	_underwear;
		std::string	_secret;
};

#endif
