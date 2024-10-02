#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(const std::string &name)
{
	std::cout << "Character constructor" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->tmp[i] = NULL;
}

Character::Character(const Character &character)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	std::cout << "Character assignation operator" << std::endl;
	if (this != &character)
	{
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = character.inventory[i]->clone();
		}
		for (int i = 0; i < 100; i++)
		{
			if (this->tmp[i])
				delete this->tmp[i];
			this->tmp[i] = character.tmp[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int j = 0; j < 100; j++)
		if (this->tmp[j])
			delete this->tmp[j];
}

const std::string &Character::getName() const
{
	return (this->name);
}


void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	int i = 0;

	if (idx >= 0 && idx < 4)
	{
		while (i < 100 && this->tmp[i])
			i++;
		tmp[i] = this->inventory[idx];
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
