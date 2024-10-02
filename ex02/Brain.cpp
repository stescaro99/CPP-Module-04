#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (short i=0; i<100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (short i=0; i<100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain assignation operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
