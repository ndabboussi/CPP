#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie_original("Stephane");
	Zombie *zombie2 = newZombie("Virginie");
	randomChump("Stack");

	zombie_original.announce();
	zombie2->announce();
	delete zombie2;
	return 0;
}