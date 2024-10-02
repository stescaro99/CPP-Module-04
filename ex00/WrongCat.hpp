#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongCat();
		WrongCat(const WrongCat &wrongCat);
		WrongCat &operator=(const WrongCat &wrongCat);
		~WrongCat();

		void makeSound() const;
};

#endif