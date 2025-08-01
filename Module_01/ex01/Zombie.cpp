#include "inc/Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << GREY "Zombie constructor called." RESET << std::endl;
	return;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << GREY "Zombie constructor called." RESET << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << GREY << "Zombie destructor called." RESET << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": hello you cuty !!!" << std::endl;
}