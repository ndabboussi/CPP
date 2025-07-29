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
# include <cstring>
# include <limits>
# include <cctype>
# include <algorithm>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"


class PhoneBook 
{
	public:
		PhoneBook();
		void	add_contact(void);
		void	search_contact(void) const;
		void	display_contact(int index) const;
		~PhoneBook(void);
	private:
		Contact	_contacts[8];
		int		_size;
		int		_last_registered_size;
};

#endif
