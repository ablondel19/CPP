/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:18:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 17:52:56 by ablondel         ###   ########.fr       */
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
	///////////////////////FILENAME
	std::string _file;
	_file = av[1];
	_file.append(".replace");
	///////////////////////OPEN AND READ ALL CONTENT
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
	///////////////////////REPLACE ALL OCCURENCES OF S1 BY S2 IN DATA
	/*
		Traverse the string and when any string s1 is found as a substring, then replace it
		by s2; initialize a string res to store the resultant string after replacing all
		occurences of the substring s1 by s2; if the prefix substring of the main string is 
		equal to s1 from the index i, then add the string s2 in the string res; Otherwise,
		add the current char to the res.
	*/
	std::string res = "";
	std::string s1 = av[2];
	std::string s2 = av[3];
	for (int i = 0; i < data.length(); i++)
	{
		int k = 0;
		if (data[i] == s1[k] && i + s1.length() <= data.length())
		{
			int j;
			for (j = i; j < i + s1.length(); j++)
			{
				if (data[j] != s1[k])
					break ;
				else
					k++;
			}
			if (j == i + s1.length())
			{
				res.append(s2);
				i = j - 1;
			}
			else
				res.push_back(data[i]);
		}
		else
			res.push_back(data[i]);
	}
	data = res;
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