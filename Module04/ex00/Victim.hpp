#pragma once

# include <iostream>
# include <sstream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(const Victim& rhs);
		virtual ~Victim();
		Victim&			operator=(const Victim& rhs);

		void			print();
		std::string		getName() const;

		void			virtual getPolymorphed() const;

	protected:
		Victim() {}
		std::string			_name;
};

std::ostream&		operator<<(std::ostream& o, const Victim& rhs);

