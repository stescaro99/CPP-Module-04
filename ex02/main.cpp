#include "WrongCat.hpp"

int main()
{
	//Animal a("Animal"); errore di compilazione dovuto al fatto che la classe Animal è astratta

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
		animals[j]->makeSound();
		delete animals[j];
	}

	return 0;
}