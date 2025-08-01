#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*zombie_copy = new Zombie(name);
	return zombie_copy;
}