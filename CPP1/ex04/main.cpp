/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:18:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 15:08:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "3 Arguments needed : 1 - filename, 2 - string, 3 - string" << std::endl;
		return (1);
	}
	std::string _file;
	_file = av[1];
	_file.append(".replace");
	std::ifstream infile;
	std::string data;
	infile.open(av[1], std::ios::in);
	if (infile)
	{
		std::ostringstream ss;
		ss << infile.rdbuf();
		data = ss.str();
		infile.close();
	}
	else
	{
		std::cout << "Failed to open the infile" << std::endl;
		return (1);
	}
	std::string res = "";
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string::size_type f = 0;
	while (1)
	{
		f = data.find(s1, f);
		if (f != std::string::npos)
		{
			data.erase(f, s1.length());
			data.insert(f, s2);
			f += s2.length();
		}
		if (f == std::string::npos || f == 0)
		{
			std::ofstream outfile;
			outfile.open(_file, std::ios::out | std::ios::trunc);
			if (outfile)
			{
				outfile << data;
				outfile.close();
			}
			else
			{
				std::cout << "Failed to open the outfile" << std::endl;
				return (1);
			}
			return (0);
		}
	}
	return (0);
}