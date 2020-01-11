/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:08:46 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/09/30 12:08:48 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

std::string strEnter(void)
{
	std::string str;
	int32_t i = 1;

	while (1)
	{
		std::cin >> str;
		if (str.size() == 0)
		{
			std::cout << "Wrong field\n";
		}
		else
		{
			return (str);
		}
	}
}

void drawTitle()
{
	std::cout << "     index|";
	std::cout << "first name|";
	std::cout << " last name|";
	std::cout << "  nickname|\n";
}

void add(Contact *contact, int32_t id)
{
	std::string buf;
	std::cout << "Enter you fistname\n";
	contact->setFirstName(strEnter());
	std::cout << "Enter you lastname\n";
	contact->setLastName(strEnter());
	std::cout << "Enter you nickname\n";
	contact->setNickname(strEnter());
	std::cout << "Enter you login\n";
	contact->setLogin(strEnter());
	std::cout << "Enter you postal adress\n";
	contact->setPostal(strEnter());
	std::cout << "Enter you phone\n";
	contact->setPhone(strEnter());
	std::cout << "Enter you birthday date\n";
	contact->setBirthday(strEnter());
	std::cout << "Enter you favorete meal\n";
	contact->setMeal(strEnter());
	std::cout << "Enter you underweat color\n";
	contact->setColor(strEnter());
	std::cout << "Enter you darkest secret\n";
	contact->setSecret(strEnter());
}

void search(Contact contact[], int32_t index)
{
	std::string command;
	int32_t work = 1;
	int32_t count = -1;
	int32_t i = 0;

	drawTitle();
	while (i < index)
	{
		contact[i].drawContact(i);
		i++;
	}
	std::cout << "\nEnter Index or BACK || b\nCommand: ";
	while (work)
	{
		std::cin >> command;
		if (command == "BACK" || command == "b")
		{
			work = 0;
		}
		else
		{
			if (command[0] >= 48 && command[0] <= 57)
				count = stoi(command);
			if (count >= 0 && count < index)
			{
				contact[count].drawContactFull();
				work = 0;
			}
			else
			{
				std::cout << "Wrong index or contact empty\n";
			}
		}
	}
}

void help()
{
	std::cout << "ADD || a - add contact\nSEARCH || s - search contact\n";
	std::cout << "EXIT || q - exit phonebook\n";
}

int main(void)
{
	Contact contact[8];
	std::string command;
	int32_t work = 1;
	int32_t count = 0;

	help();
	while (work)
	{
		std::cout << "Command: ";
		std::cin >> command;
		if (command == "ADD" || command == "a")
		{
			if (count >= 8)
			{
				std::cout << "Phonebook full \n";
			}
			else
			{
				add(&contact[count], count);
				count++;
			}
		}
		else if (command == "SEARCH" || command == "s")
		{
			if (count < 1)
			{
				std::cout << "Phonebook empty \n";
			}
			else
			{
				search(contact, count);
			}
		}
		else if (command == "EXIT" || command == "q")
		{
			work = 0;
		}
		else
		{
			std::cout << "Wrong command\n";
			help();
		}
	}
	return (0);
}