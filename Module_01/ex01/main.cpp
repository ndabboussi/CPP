#include "inc/Zombie.hpp"

int	main(void)
{
	int N = 21;
	Zombie	*horde = zombieHorde(N, "choupissons");
	if (!horde)
		return 1;
	for (int i = 0; i < N; i++)
	{
		std::cout << PINK << i + 1 << ": " << RESET;
		horde[i]. announce();
	}
	delete [] horde;
	return 0;
}