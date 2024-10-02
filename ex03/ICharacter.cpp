#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter default constructor" << std::endl;
}

ICharacter::ICharacter(const ICharacter &icharacter)
{
	std::cout << "ICharacter copy constructor" << std::endl;
	*this = icharacter;
}

ICharacter &ICharacter::operator=(const ICharacter &icharacter)
{
	std::cout << "ICharacter assignation operator" << std::endl;
	if (this != &icharacter)
		*this = icharacter;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor" << std::endl;
}
