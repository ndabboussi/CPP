#include <iostream>
#include <string>

#define GREY	"\033[90m"
#define PINK	"\033[35m"
#define GREEN	"\033[32m"
#define	RESET	"\033[0m"

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the string: " << GREEN << &str << RESET << std::endl;
	std::cout << "Memory address held by stringPTR: " << GREEN << stringPTR << RESET << std::endl;
	std::cout << "Memory address held by stringREF: " << GREEN << &stringREF << RESET << std::endl;

	std::cout << "Value of the string: " << PINK << str << RESET << std::endl;
	std::cout << "Value pointed to by stringPTR: " << PINK << *stringPTR << RESET << std::endl;
	std::cout << "Value pointed to by stringREF: " << PINK << stringREF << RESET << std::endl;

	return 0;
}