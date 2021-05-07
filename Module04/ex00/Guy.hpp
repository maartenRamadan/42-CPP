#pragma once

# include <iostream>
# include <sstream>
# include "Peon.hpp"

class Guy : public Victim
{
	Guy() {}

	public:
		Guy(std::string name);
		Guy(const Guy& rhs);
		virtual ~Guy();
		Guy&	operator=(const Guy& rhs);

		void	virtual getPolymorphed() const;
};
