/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <ndabbous@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 08:45:34 by ndabbous          #+#    #+#             */
/*   Updated: 2025-06-20 08:45:34 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

bool is_digits(const std::string &str)
{
	if (str.empty())
		return false;
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void	Contact::create_contact(void)
{
	std::string infos[5];
//	first_name, las_name, nickname, phone_nb, darkest_secret;

	for (int i = 0; i < 4; i++)
	{
		std::getline(std::cin, infos[i]);
		if (std::cin.eof())
		{
			std::cout << "Error: CTRL+D, exiting add_contact." << std::endl;
			return;
		}
		if (infos[i].empty())
		{
			std::cout << "Error: your input cannot be empty ! Please enter at least 1 character." << std::endl;
			i--;
			continue;
		}
		if (i == 3 && is_digits(infos[i]) <= 0)
		{
			std::cout << "Error: a phone number can only contain digits, please try again." << std::endl;
			i--;
			continue;
		}
	}
	return;
}

// 	for (size_t i = 0; i < this->nbr_inputs; i++)
// 	{
// 		std::cout << "Enter " << fields[i] << ": ";
// 		std::string input;
// 		std::getline(std::cin, input);
// 		if (std::cin.eof())
// 		{
// 			std::cout << "Error: Input stream closed." << std::endl;
// 			return;
// 		}
// 		if (input.empty())
// 		{
// 			std::cout << "Error: " << fields[i] << " cannot be empty." << std::endl;
// 			i--;
// 			continue;
// 		}
// 		contact->set_field(fields[i], input);


//  std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

//     std::cout << "Enter first name: ";
//     std::getline(std::cin, firstName);
//     if (std::cin.eof())
//     {
//         std::cout << "\nCTRL+D was pressed. Exiting addContact.\n";
//         return -2;
//     }
//     firstName = trim(firstName);
//     firstName = reduceMultipleSpacesToOne(firstName);
//     if (std::cin.eof())
//     {
//         std::cout << "\nCTRL+D was pressed. Exiting addContact.\n";
//         return -2;
//     }