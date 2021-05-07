#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
	public:
		ZombieHorde(int nb);
		~ZombieHorde();

		std::string		randomName();
		void			annouceHorde();
		void			killHorde();

	private:
		int				_nb;
		Zombie*			_horde;
};

#endif