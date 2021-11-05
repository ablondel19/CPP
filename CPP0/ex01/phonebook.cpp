/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:57:22 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/05 19:26:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_contact(int index, phonebook *add)
	{
		std::cout << "Enter first name:\n";
		std::cin >> add->book[index].first_name;
		std::cout << "Enter last name:\n";
		std::cin >> add->book[index].last_name;
		std::cout << "Enter nickname:\n";
		std::cin >> add->book[index].nickname;
		std::cout << "Enter phone number:\n";
		std::cin >> add->book[index].phone_number;
		std::cout << "Enter darkest secret:\n";
		std::cin >> add->book[index].darkest_secret;
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
		std::cout << "first_name: " << book.first_name << "\n";
		std::cout << "last_name: " << book.last_name << "\n";
		std::cout << "nickname: " << book.nickname << "\n";
		std::cout << "phone_number: " << book.phone_number << "\n";
		std::cout << "darkest_secret: " << book.darkest_secret << "\n";
	}

	void	select_contact(phonebook add)
	{
		int	x = -1;
		std::cout << "View informations by entering the contact number\n";
		std::cin >> x;
		while (std::cin.fail() || (x < 1 || x > add.max) || !x)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Invalid contact number\n";
			std::cin >> x;
		}
		std::cout << "------------------------------------------------\n";
		std::cout << "               CONTACT No: [" << x << "]\n";
		std::cout << "------------------------------------------------\n";
		std::cout << "first_name: " << add.book[x].first_name << "\n";
		std::cout << "last_name: " << add.book[x].last_name << "\n";
		std::cout << "nickname: " << add.book[x].nickname << "\n";
		std::cout << "phone_number: " << add.book[x].phone_number << "\n";
		std::cout << "darkest_secret: " << add.book[x].darkest_secret << "\n";
		std::cout << "------------------------------------------------\n";
	}
	
	void	print_search(phonebook add)
	{
		int index;

		index = 1;
		if (add.max < 1)
		{
			std::cout << "No data available.\n";
			return ;
		}
		std::cout << "   index  |first name| lastname | nickname |\n";
		while (index < add.max)
		{
			std::cout << std::setw(10);
			std::cout << index << "|";
			print_entry(add.book[index].first_name);
			print_entry(add.book[index].last_name);
			print_entry(add.book[index].nickname);
			std::cout << "\n";
			index++;
		}
	}

	void	action_add(phonebook *add)
	{
		std::cout << "Add new entry\n";
		add_contact(add->max, add);
		add->max++;
	}

	void	action_search(phonebook *add)
	{
		if (add->max <= 1)
		{
			std::cout << "No data available.\n";
			return ;
		}
		std::cout << "Search for entry\n";
		print_search(*add);
		select_contact(*add);
	}

	void	action_selection(phonebook *add)
	{
		std::string arg;
		
		if (add->max <= 8)
			std::cout << "\nEnter a request: ADD / SEARCH / EXIT\n";
		else
			std::cout << "\nEnter a request: SEARCH / EXIT\n";
		std::cin >> arg;
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(MAX_INPUT, '\n');
			std::cout << "Invalid input\n";
			std::cin >> arg;
		}
		if (arg.compare("ADD") == 0)
			action_add(add);
		else if (arg.compare("SEARCH") == 0)
			action_search(add);
		else if (arg.compare("EXIT") == 0)
			exit(0);
		else
			std::cout << "Invalid request\n";
		if (add->max > 8)
		{
			std::cout << "Phonebook full\n";
			action_selection(add);
		}
	}

int		main(void)
{	
	phonebook add;
	
	add.max = 1;
	while (1)
		action_selection(&add);
	return (0);
}
