#include <iostream>

template <typename T>
void	fun(T& x) {
	x += 1;
}

template<typename T>
void	print(T A) {
	std::cout << A << std::endl;
}

template <typename T>
void	iter(T* arr, int len, void fun(T& x)) {
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

int		main(void)
{
	int x[] = { 1, 3, 5, 7 };

	iter(x, 4, fun);
	iter(x, 4, print);

	std::string y[] = { "ik", "print", "dit" };

	iter(y, 3, print);
	return (0);
}
