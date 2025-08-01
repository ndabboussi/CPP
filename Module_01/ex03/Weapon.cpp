#include "inc/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_type = name;
	std::cout << GREY "Weapon constructor called." RESET << std::endl;
	return;
}

Weapon::~Weapon()
{
	std::cout << GREY "Weapon destructor called." RESET << std::endl;
	return;
}

std::string	Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}