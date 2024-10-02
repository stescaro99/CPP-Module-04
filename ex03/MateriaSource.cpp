#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
	_materiasCount = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	std::cout << "MateriaSource assignation operator" << std::endl;
	if (this != &materiaSource)
	{
		_materiasCount = materiaSource._materiasCount;
		for (int i = 0; i < 4; i++)
			_materias[i] = materiaSource._materias[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia == NULL)
		return;
	if (_materiasCount < 4)
	{
		_materias[_materiasCount] = materia;
		_materiasCount++;
		std::cout << materia->getType() << " learned" << std::endl;
	}
	else
		std::cout << "MateriaSource is full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_materiasCount; i++)
	{
		if (_materias[i] != NULL && _materias[i]->getType() == type)
		{
			std::cout << type << " created" << std::endl;
			return (_materias[i]->clone());
		}
	}
	std::cout << type << " not found" << std::endl;
	return (NULL);
}
