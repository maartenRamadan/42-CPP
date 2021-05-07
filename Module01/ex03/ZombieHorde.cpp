#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int nb) : _nb(nb)
{
	if (nb <= 0)
		std::cout << "Horde size must be greater than 0" << std::endl;
	try {
		this->_horde = new Zombie[nb];
		for (int i = 0; i < this->_nb; i++)
		{
			this->_horde[i].setName(randomName());
			this->_horde[i].setType("horde");
		}
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_horde;
	std::cout << "Horde got nuked" << std::endl;
}

std::string
ZombieHorde::randomName()
{
	static int check = 0;
	if (check == 0)
	{
		srand(time(NULL));
		check++;
	}
	int i = rand() % 9;
	std::string name[] = {"Fritsie", "Henkie", "Sjakie", "Kareltje", "Ruurd", "Michel", "Wimpie", "Ferdinand", "Hans"};
	return (name[i]);
}

void
ZombieHorde::annouceHorde()
{
	for (int i = 0; i < this->_nb; i++) {
		this->_horde[i].announce();
	}
}
