#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog.type)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &dog)
	{
		Animal::operator=(dog);
		this->type = dog.type;
		this->brain = new Brain(*dog.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": Woof!" << std::endl;
}