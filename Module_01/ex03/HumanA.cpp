#include "inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << GREEN << this->_name << " constructor called." RESET << std::endl;
	return;
}

HumanA::~HumanA()
{
	std::cout << GREEN << this->_name << " destructor called." RESET << std::endl;
	return;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}