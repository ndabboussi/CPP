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

PhoneBook::PhoneBook(void) : _size(0), _last_registered_size(0)
{
	std::cout << "Phonebook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook Destructor called" << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	Contact	contact;

	std::cout << "      Add a new contact :" << std::endl;
	contact.create_contact();
	//_index[_last_registered_size] = contact;
	_last_registered_size = (_last_registered_size + 1) % 8;
	if (_size < 8)
		_size++;
	return;
}
//need to retrieve which index is available, and if full replace the last one 
//then add contact to the index