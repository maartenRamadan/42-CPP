#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
	
		void			setName(std::string n);
		void			setType(std::string t);
		void			announce();

	private:
		std::string		 _type;
		std::string 	_name;
};

#endif