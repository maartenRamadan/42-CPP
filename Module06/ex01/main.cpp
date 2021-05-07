#include "Header.hpp"

void*
serialize(void)
{
	Data *d = new Data;
	std::string alpha = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@#*&";

	srand(time(NULL));
	for (int i = 0; i < 8; i++)
		d->s1 += alpha[rand() % 66];
	d->n = rand() % 100;
	for (int i = 0; i < 8; i++)
		d->s2 += alpha[rand() % 66];
	return (reinterpret_cast<void*>(d));
}

Data*
deserialize(void* raw)
{
	Data *ret = new Data;
	ret->s1 = std::string(reinterpret_cast<char*>(raw) + 1, 8);
	ret->n = *(reinterpret_cast<int*>(raw) + 6);
	ret->s2 = std::string(reinterpret_cast<char*>(raw) + 33, 8);
	return (ret);
}

int
main(void)
{
	void *d = serialize();
	Data *e = deserialize(d);

	std::cout	<< "s1: "	<< e->s1	<< std::endl
				<< "n: "	<< e->n		<< std::endl
				<< "s2: "	<< e->s2	<< std::endl;
	return (0);
}
