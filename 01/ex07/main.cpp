/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 20:12:06 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 20:12:08 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::string name;
	std::string replace_name;
	std::string replace;
	std::ofstream new_file;
	std::string line;

	std::cout << "Enter filename: ";
	std::cin >> name;
	std::cout << "Enter replace name: ";
	std::cin >> replace_name;
	std::cout << "Enter replace: ";
	std::cin >> replace;
	size_t pos;

	std::ifstream file(name);
	if (!file.is_open())
	{
		std::cout << "Fail.." << std::endl;
	}
	else
	{
		new_file.open(name + ".replace");
		if (!new_file.is_open())
		{
			std::cout << "Fail.." << std::endl;
			return (-1);
		}
	}
	while (getline(file, line))
	{
		while ((pos = line.find(replace_name)) != std::string::npos)
		{
			line.replace(pos, replace_name.size(), replace);
		}
		new_file << line;
	}

	return (0);
}