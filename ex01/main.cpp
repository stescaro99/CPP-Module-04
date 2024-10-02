#include "WrongCat.hpp"

int main()
{
	const int n = 7;
	Animal *animals[n];
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int j = 0; j < n; j++)
	{
		delete animals[j];
	}
	
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	
	return 0;
}