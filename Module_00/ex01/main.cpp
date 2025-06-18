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

int	main()
{
	char	buff[500];

	while (true)
	{
		std::cout << "Enter a command: ";
		
	}
	PhoneBook instance( 'a', 42, 4.6);
	PhoneBook instance2( 'x', 62, 4.000);
	return (0);
}

// int main(void)
// {
// 	PhoneBook phone_book;
// 	while (true)
// 	{
// 		std::cout << "Enter a command: ";
// 		std::string command;
// 		std::getline(std::cin, command);
// 		if (command == "EXIT" || std::cin.eof())
// 			break;
// 		else if (command == "ADD")
// 			add_contact(phone_book);
// 		else if (command == "SEED")
// 			contact_seeder(phone_book);
// 		else if (command == "SEARCH")
// 			phone_book.search_contact();
// 		else
// 			std::cout << "Unknown command." << std::endl;
// 	}
// 	return (0);
// }