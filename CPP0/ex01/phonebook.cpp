/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:57:22 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/21 18:47:35 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string phonebook::contact::getFirstName() const
{
	return this->_first_name;
}

std::string phonebook::contact::getLastName() const
{
	return this->_last_name;
}

std::string phonebook::contact::getNickname() const
{
	return this->_nickname;
}

std::string phonebook::contact::getPhoneNumber() const
{
	return this->_phone_number;
}

std::string phonebook::contact::getSecret() const
{
	return this->_darkest_secret;
}

void 		phonebook::contact::setFirstName( std::string data )
{
	this->_first_name = data;
}

void 		phonebook::contact::setLastName( std::string data )
{
	this->_last_name = data;
}

void 		phonebook::contact::setNickName( std::string data )
{
	this->_nickname = data;
}

void 		phonebook::contact::setPhoneNumber( std::string data )
{
	this->_phone_number = data;
}

void		phonebook::contact::setSecret( std::string data )
{
	this->_darkest_secret = data;
}

void	add_contact(int index, phonebook *addr)
{
	std::string data;
	std::cout << "Enter first name:" << std::endl;
	std::cin >> data;
	addr->book[index].setFirstName(data);
	std::cout << "Enter last name:" << std::endl;
	std::cin >> data;
	addr->book[index].setLastName(data);
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> data;
	addr->book[index].setNickName(data);
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> data;
	addr->book[index].setPhoneNumber(data);
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> data;
	addr->book[index].setSecret(data);
}

void	print_entry(std::string entry)
{
	std::cout << std::setw(10);
	if (entry.length() > 10)
	{
		entry.resize(10);
		entry.replace(9, 1, ".");
	}
	std::cout << entry;
	std::cout << "|";
}
	
void	print_contact_infos(phonebook::contact book)
{
	std::cout << "first_name: " << book.getFirstName() << std::endl;
	std::cout << "last_name: " << book.getLastName() << std::endl;
	std::cout << "nickname: " << book.getNickname() << std::endl;
	std::cout << "phone_number: " << book.getPhoneNumber() << std::endl;
	std::cout << "darkest_secret: " << book.getSecret() << std::endl;
}

void	select_contact(phonebook add)
{
	int	x = -1;
	std::cout << "View informations by entering the contact index" << std::endl;
	std::cin >> x;
	while (std::cin.fail() || (x < 1 || x > add.max) || !x)
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Invalid contact number" << std::endl;
		std::cin >> x;
	}
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "               CONTACT No: [" << x << "]" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "first_name: " << add.book[x].getFirstName() << std::endl;
	std::cout << "last_name: " << add.book[x].getLastName() << std::endl;
	std::cout << "nickname: " << add.book[x].getNickname() << std::endl;
	std::cout << "phone_number: " << add.book[x].getPhoneNumber() << std::endl;
	std::cout << "darkest_secret: " << add.book[x].getSecret() << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
}
	
void	print_search(phonebook add)
{
	int index = 1;
	
	if (add.max < 1)
	{
		std::cout << "No data available." << std::endl;
		return ;
	}
	std::cout << "   index  |first name| lastname | nickname |" << std::endl;
	while (index < add.max)
	{
		std::cout << std::setw(10);
		std::cout << index << "|";
		print_entry(add.book[index].getFirstName());
		print_entry(add.book[index].getLastName());
		print_entry(add.book[index].getNickname());
		std::cout << std::endl;
		index++;
	}
}

void	action_add(phonebook *addr)
{
	std::cout << "Add new entry" << std::endl;
	add_contact(addr->max, addr);
	addr->max++;
}

void	action_search(phonebook *add)
{
	if (add->max <= 1)
	{
		std::cout << "No data available." << std::endl;
		return ;
	}
	std::cout << "Search for entry" << std::endl;
	print_search(*add);
	select_contact(*add);
}

void	action_selection(phonebook::contact *add, phonebook *addr)
{
	std::string arg;
	
	if (addr->max <= 8)
		std::cout << "Enter a request: ADD / SEARCH / EXIT" << std::endl;
	else
		std::cout << "Enter a request: SEARCH / EXIT" << std::endl;
	std::cin >> arg;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(MAX_INPUT, '\n');
		std::cout << "Invalid input" << std::endl;
		std::cin >> arg;
	}
	if (arg.compare("ADD") == 0)
		action_add(addr);
	else if (arg.compare("SEARCH") == 0)
		action_search(addr);
	else if (arg.compare("EXIT") == 0)
		exit(0);
	else
		std::cout << "Invalid request" << std::endl;
	if (addr->max > 8)
	{
		std::cout << "Phonebook full" << std::endl;
		action_selection(add, addr);
	}
}

int		main(void)
{	
	phonebook addr;
	phonebook::contact add; 
	
	addr.max = 1;
	while (1)
		action_selection(&add, &addr);
	return (0);
}
