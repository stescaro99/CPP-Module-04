#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << ": ";
	if (this->type == "Cat")
		std::cout << "Woof!" << std::endl;
	else
		std::cout << "Meow!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
