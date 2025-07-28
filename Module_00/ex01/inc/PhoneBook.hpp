/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <ndabbous@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-17 14:01:21 by ndabbous          #+#    #+#             */
/*   Updated: 2025-06-17 14:01:21 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <algorithm>

class PhoneBook 
{
	public:
		PhoneBook();
		void	add_contact(void);
		~PhoneBook(void);
	private:
		//Contact	_index[8];
		int		_size;
		int		_last_registered_size;
};

#endif
