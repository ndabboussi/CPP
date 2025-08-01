#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

#define GREY	"\033[90m"
#define PINK	"\033[35m"
#define	RESET	"\033[0m"

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif