#include "Bureaucrat.hpp"

int         main()
{
	std::cout << "wester:" << std::endl;
	try {
		Bureaucrat wester("wessa", 100);

		std::cout << wester << std::endl;	
		wester.increment();
		std::cout << wester << std::endl;
	}
	catch (const std::exception& error){
		std::cerr << error.what() << std::endl;
	}
	
	std::cout << std::endl << "piet:" << std::endl;
	
	try {
		Bureaucrat piet("piet", 180);

		std::cout << piet << std::endl;	
		piet.increment();
		std::cout << piet << std::endl;
	}
	catch (const std::exception& error){
		std::cerr << error.what() << std::endl;
	}
	std::cout << std::endl << "kees:" << std::endl;
	
	try {
		Bureaucrat kees("cheese", 1);

		std::cout << kees << std::endl;	
		kees.increment();
		std::cout << kees << std::endl;
	}
	catch (const std::exception& error){
		std::cerr << error.what() << std::endl;
	}

	std::cout << std::endl << "joe:" << std::endl;
	try {
		Bureaucrat joe("joe", 149);

		std::cout << joe << std::endl;	
		joe.decrement();
		std::cout << joe << std::endl;
		joe.decrement();
		std::cout << joe << std::endl;
	}
	catch (const std::exception& error){
		std::cerr << error.what() << std::endl;
	}
	
	return 0;
}