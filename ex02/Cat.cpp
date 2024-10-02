#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat.type)
{
	this->type = cat.type;
	this->brain = new Brain(*cat.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &cat)
	{
		Animal::operator=(cat);
		this->type = cat.type;
		this->brain = new Brain(*cat.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Meow!" << std::endl;
}