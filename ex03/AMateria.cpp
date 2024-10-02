#include "Cure.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(const AMateria &aMateria)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = aMateria;
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
	std::cout << "AMateria assignation operator" << std::endl;
	if (this != &aMateria)
		this->_type = aMateria._type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor" << std::endl;
	this->_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses "<< this->_type << " on " << target.getName() << " *" << std::endl;
}
