#include "Phonebook.class.hpp"

Contact list[8];

std::string		upper_cmd(std::string cmd)
{
	for (int i = 0; cmd[i]; i++)
		cmd[i] = toupper(cmd[i]);
	return (cmd);
}

void			search(int nb)
{
	std::string input;
	int			index;

	std::cout <<	std::setw(10) << "Index"		<< '|' << 
					std::setw(10) << "First name"	<< '|' << 
					std::setw(10) << "Last name"	<< '|' << 
					std::setw(10) << "Nickname"		<< '\n';
	for (int i = 0; i < nb; i++)
		list[i].print_preview();
	while (1)
	{
		std::cout << "Choose contact: ";
		std::getline(std::cin, input, '\n');
		if (input.length() == 1 && std::isdigit(input[0]) && input[0] != '0')
		{
			index = input[0] - '0';
			if (index - 1 < nb)
			{
				list[index - 1].print();
				return ;
			}
		}
		std::cout << "Input invalid. Choose a number between 1 and " << nb << std::endl;
	}
}

int				main(void)
{
	std::string cmd;
	int nb = 0;

	while (1)
	{
		std::cout << "Options: ADD | SEARCH | EXIT" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, cmd, '\n');
		cmd = upper_cmd(cmd);
		if (cmd == "ADD")
		{
			if (nb == 8)
				std::cout << "Phonebook is full" << std::endl;
			else
			{
				list[nb].add(nb + 1);
				nb++;
			}
		}
		else if (cmd == "SEARCH")
		{
			if (nb == 0)
				std::cout << "Phonebook is empty" << std::endl;
			else
				search(nb);
		}
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
