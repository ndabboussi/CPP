#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

#define GREY	"\033[90m"
#define	RESET	"\033[0m"

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);

	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif