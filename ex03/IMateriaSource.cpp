#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() 
{
	std::cout << "IMateriaSource default constructor" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &imateriasource)
{
	std::cout << "IMateriaSource copy constructor" << std::endl;
	*this = imateriasource;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &imateriasource)
{
	std::cout << "IMateriaSource assignation operator" << std::endl;
	if (this != &imateriasource)
		*this = imateriasource;
	return (*this);
}

void IMateriaSource::learnMateria(AMateria *materia)
{
	std::cout << materia->getType() << " learned" << std::endl;
}
