#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog.type)
{
	this->type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
		this->type = dog.type;
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": Woof!" << std::endl;
}