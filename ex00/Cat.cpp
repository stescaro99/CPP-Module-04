#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat.type)
{
	this->type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		Animal::operator=(cat);
		this->type = cat.type;
	}
	std::cout << "Cat assignation operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Meow!" << std::endl;
}