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
		void	setFirstName(std::string value);
		void 	setLastName(std::string value);
		void 	setNickname(std::string value);
		void 	setPhoneNumber(std::string value);
		void 	setDarkestSecret(std::string value);

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_nb;
		std::string _darkest_secret;
	//	std::string infos = "first_name, last_name, nickname, phone_nb, darkest_secret";
};

#endif
