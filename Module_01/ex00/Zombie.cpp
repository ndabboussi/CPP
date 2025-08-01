#include "Zombie.hpp"

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
	std::cout << GREY << this->_name << " destructor called." RESET << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
