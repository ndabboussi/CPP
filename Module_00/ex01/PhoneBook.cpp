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
	std::cout << "Phonebook Constructor called" << std::endl;
	_size = 0;
	_last_registered_size = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook Destructor called" << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	//Contact	contact;

	std::cout << "	Add a new contact :" << std::endl;
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
	//std::cout << "Contact enregistré à l’contacts : " << _last_registered_size << std::endl;
	//std::cout << "Nombre total de contacts : " << _size << std::endl;
	return;
}
//need to retrieve which contacts is available, and if full replace the last one 
//then add contact to the contacts