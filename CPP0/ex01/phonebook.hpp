/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:44:39 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/21 18:45:49 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

class phonebook
{
	public:
	class	contact
	{
		private:
			std::string _first_name;
			std::string _last_name;
			std::string _nickname;
			std::string _phone_number;
			std::string _darkest_secret;
		public:
			std::string getFirstName() const;
			std::string getLastName() const;
			std::string getNickname() const;
			std::string getPhoneNumber() const;
			std::string	getSecret() const;
			void 		setFirstName( std::string data );
			void 		setLastName( std::string data );
			void 		setNickName( std::string data );
			void 		setPhoneNumber( std::string data );
			void		setSecret( std::string data );
	};
	contact	book[9];
	int		max;
};

#endif // !PHONEBOOK_HPP
