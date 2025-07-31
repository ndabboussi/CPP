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
#define GREY	"\033[90m"
#define BOLD    "\033[1m"

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
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;


	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_nb;
		std::string _darkest_secret;
	//	std::string infos = "first_name, last_name, nickname, phone_nb, darkest_secret";
};

#endif
