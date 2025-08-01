#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

#define GREY	"\033[90m"
#define PINK	"\033[35m"
#define GREEN	"\033[32m"
#define	RESET	"\033[0m"

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string name);
	~Weapon();
	std::string	getType(void) const;
	void	setType(std::string newType);
};

#endif