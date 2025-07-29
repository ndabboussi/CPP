/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <ndabbous@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-17 14:05:18 by ndabbous          #+#    #+#             */
/*   Updated: 2025-06-17 14:05:18 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook phonebook;

	std::cout << MAGENTA << "Welcome ! Have fun with your PhoneBook <3" << RESET << std::endl;
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::string input;
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
		{
			phonebook.search_contact();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			std::cout << YELLOW << "Invalid command, please try again." << RESET << std::endl;
	}
	return (0);
}
