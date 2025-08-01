/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <ndabbous@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-17 14:02:34 by ndabbous          #+#    #+#             */
/*   Updated: 2025-06-17 14:02:34 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_size = 0;
	_last_registered_size = 0;
	std::cout << GREY << "Phonebook constructor called" << RESET << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << GREY << "PhoneBook destructor called" << RESET << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	std::cout << BOLD << "\n	Add a new contact :" << RESET << std::endl;
	if (this->_size < 8)
	{
		this->_contacts[this->_size].create_contact();

		this->_size++;
	}
	else
	{
		this->_contacts[this->_last_registered_size].create_contact();
		this->_last_registered_size = (this->_last_registered_size + 1) % 8;
	}
	return;
}

static std::string format_string(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void PhoneBook::display_contact(int index) const
{
	const Contact &c = _contacts[index];
	std::cout << MAGENTA << BOLD << "\nFirst name: " << RESET << c.getFirstName() << std::endl;
	std::cout << MAGENTA << BOLD << "Last name: " << RESET << c.getLastName() << std::endl;
	std::cout << MAGENTA << BOLD << "Nickname: " << RESET << c.getNickname() << std::endl;
	std::cout << MAGENTA << BOLD << "Phone number: " << RESET << c.getPhoneNumber() << std::endl;
	std::cout << MAGENTA << BOLD << "Darkest secret: " << RESET << c.getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::search_contact(void) const
{
	
	if (this->_size == 0)
	{
		std::cout << YELLOW << "PhoneBook is empty. Please use ADD to create at least 1 contact.\n" << RESET << std::endl;
		return;
	}

	std::cout << "\n|" << CYAN << std::setw(10) << "Index" << RESET
				<< "|" << CYAN << std::setw(10) << "First Name" << RESET
				<< "|" << CYAN << std::setw(10) << "Last Name" << RESET
				<< "|" << CYAN << std::setw(10) << "Nickname" << RESET << "|" << std::endl;

	std::cout << "|" << std::setfill('-') << std::setw(11)
				<< "|" << std::setfill('-') << std::setw(11)
				<< "|" << std::setfill('-') << std::setw(11)
				<< "|" << std::setfill('-') << std::setw(11)
				<< "|" << std::endl;

	std::cout << std::setfill(' ');

	for (int i = 0; i < this->_size; i++)
	{
		std::cout << "|" << GREEN << std::setw(10) << i + 1 << RESET
					<< "|" << std::setw(10) << format_string(_contacts[i].getFirstName())
					<< "|" << std::setw(10) << format_string(_contacts[i].getLastName()) 
					<< "|" << std::setw(10) << format_string(_contacts[i].getNickname())
					<< "|" << std::endl; 
	}

	std::string input;
	int index = -1;
	while (true)
	{
		std::cout << "\nEnter an index to view full contact: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << YELLOW << "Error: Input stream closed (CTRL+D)." << RESET << std::endl;
			return;
		}
		if (input.empty())
		{
			std::cout << YELLOW << "Invalid index, please enter a number within the range of your contacts nb (1 to " 
		          << this->_size << ")." << RESET;
			continue;
		}

		if (input.length() == 1 && std::isdigit(input[0]))
		{
			index = input[0] - '0' - 1;
			if (index >= 0 && index < this->_size)
				break;
		}
		std::cout << YELLOW << "Invalid index, please enter a number within the range of your contacts nb (1 to " 
		          << this->_size << ")." << RESET;
	}
	display_contact(index);
}

	//	std::cin >> input;
		// if (!std::getline(std::cin, input))
		// {
		// 	std::cout << RED << "\nInput interrupted (EOF).\n" << RESET;
		// 	std::cin.clear();
		// 	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// 	return;
		//}


		// std::getline(std::cin, input);
		// if (std::cin.eof())
		// {
		//  	std::cout << RED << "\nInput interrupted (EOF).\n" << RESET;
		// 	std::cin.clear();
		// 	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// 	continue;
		// }