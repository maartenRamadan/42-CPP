#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony 
{
	std::string _name;
	std::string _color;
	int _age;

	public:
		Pony();
		~Pony();

		void			pony_on_heap(std::string name, std::string color, int age);
		void			pony_on_stack(std::string name, std::string color, int age);

		std::string		getName();
		std::string		getColor();
		int				getAge();

		void			setName(std::string name);
		void			setColor(std::string color);
		void			setAge(int age);
};

#endif
