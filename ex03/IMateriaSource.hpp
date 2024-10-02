#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	protected:
	IMateriaSource();
	IMateriaSource(const IMateriaSource &imateriasource);
	IMateriaSource &operator=(const IMateriaSource &imateriasource);

	public:
	virtual ~IMateriaSource() {}
	
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif