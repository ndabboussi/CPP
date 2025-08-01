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
	std::cout << GREY << "Contact constructor called" << RESET << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << GREY << "Contact destructor called" << RESET << std::endl;
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

void Contact::setFirstName(std::string value){
	_first_name = value;
}
void Contact::setLastName(std::string value)
{
	_last_name = value;
}

void Contact::setNickname(std::string value) 
{
	_nickname = value;
}

void Contact::setPhoneNumber(std::string value)
{
	_phone_nb = value;
}

void Contact::setDarkestSecret(std::string value)
{
	_darkest_secret = value;
}

std::string Contact::getFirstName() const
{
	return _first_name;
}
std::string Contact::getLastName() const
{
	return _last_name;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhoneNumber() const
{
	return _phone_nb;
}

std::string Contact::getDarkestSecret() const
{
	return _darkest_secret;
}

void	Contact::create_contact(void)
{
	const	std::string infos[] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "		" << infos[i] << ": ";
		std::string input;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << YELLOW << "Error: Input stream closed (CTRL+D)." << RESET << std::endl;
			return;
		}
		if (input.empty())
		{
			std::cout << YELLOW << "		Error: input cannot be empty ! Please try again: " << RESET;
			i--;
			continue;
		}
		if (i == 3 && (input.empty() || !is_digits(input)))
		{
			std::cout << YELLOW << "		Error: phone number must be numeric and not empty. Please try again: " << RESET;
			i--;
			continue;
		}
		if (i == 0)
			setFirstName(input);
		else if (i == 1)
			setLastName(input);
		else if (i == 2)
			setNickname(input);
		else if (i == 3)
			setPhoneNumber(input);
		else if (i == 4)
		{
			setDarkestSecret(input);
			std::cout << std::endl;
		}
	}
	return;
}
