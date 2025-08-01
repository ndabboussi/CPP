#include "inc/HumanB.hpp"

HumanB::HumanB(std::string name) : 	_weapon(NULL), _name(name)
{
	std::cout << PINK << this->_name << " constructor called." RESET << std::endl;
	return;
}

HumanB::~HumanB()
{
	std::cout << PINK << this->_name << " destructor called." RESET << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon... " << std::endl;
	else
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}