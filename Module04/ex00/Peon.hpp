#pragma once

# include <iostream>
# include <sstream>
# include "Victim.hpp"

class Peon : public Victim
{
	Peon() {}

	public:
		Peon(std::string name);
		Peon(const Peon& rhs);
		virtual ~Peon();
		Peon&		operator=(const Peon& rhs);
		
		void		virtual getPolymorphed() const;
};
