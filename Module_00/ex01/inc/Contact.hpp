/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <ndabbous@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-18 16:39:43 by ndabbous          #+#    #+#             */
/*   Updated: 2025-06-18 16:39:43 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <algorithm>

class Contact
{
	public:
		Contact();
		~Contact(void);
		void	create_contact();
	private:
		std::string first_name;
		std::string las_name;
		std::string nickname;
		std::string phone_nb;
		std::string darkest_secret;
	//	std::string infos = "first_name, las_name, nickname, phone_nb, darkest_secret";
};

#endif
