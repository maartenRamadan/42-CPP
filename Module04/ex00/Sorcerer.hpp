#pragma once

# include <iostream>
# include <sstream>
# include "Peon.hpp"

class Sorcerer
{
	Sorcerer() {}

	std::string			_name;
	std::string			_title;

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& rhs);
		virtual ~Sorcerer();
		Sorcerer&		operator=(const Sorcerer& rhs);

		std::string		getName() const;
		std::string		getTitle() const;

		void			polymorph(const Victim& rhs) const;

};

std::ostream&			operator<<(std::ostream& o, const Sorcerer& rhs);

