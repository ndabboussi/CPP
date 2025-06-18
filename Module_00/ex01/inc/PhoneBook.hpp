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

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook 
{
	public:
		char	a1;
		int		a2;
		float	a3;

		PhoneBook(char a1, int a2, float a3);
		~PhoneBook(void);
};

#endif
