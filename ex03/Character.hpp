#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *tmp[100];

	public:
		Character();
		Character(const std::string &name);
		Character(const Character &character);
		Character &operator=(const Character &character);
		~Character();

		void setName(const std::string &name);
		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif