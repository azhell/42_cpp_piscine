/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:32:46 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:32:48 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = randName();
	std::cout << "Zombie const\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie dest\n";
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

std::string Zombie::getType(void)
{
	return (this->_type);
}

std::string Zombie::randName()
{
	int rand = 1;
	int i;
	std::string name;
	int times;

	times = time(nullptr);
	i = std::rand() % 13;
	std::srand(times - i);
	rand = std::rand() % 5;
	switch (rand)
	{
	case 1:
	{
		name = "Gaben";
		break;
	}
	case 2:
	{
		name = "JoJo";
		break;
	}
	case 3:
	{
		name = "Niki";
		break;
	}
	case 4:
	{
		name = "Hobbit";
		break;
	}
	case 5:
	{
		name = "Gnome";
		break;
	}
	default:
		name = "Bree";
	}
	return (name);
}