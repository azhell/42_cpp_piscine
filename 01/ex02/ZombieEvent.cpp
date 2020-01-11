/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:33:00 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:33:01 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::randChump(void)
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
	_name = name;
	Zombie zombie(name, _type);
}

void ZombieEvent::setName(std::string str)
{
	this->_name = str;
}

void ZombieEvent::setZombieType(std::string str)
{
	this->_type = str;
}

std::string ZombieEvent::getName(void)
{
	return (this->_name);
}

std::string ZombieEvent::getType(void)
{
	return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;

	_name = name;
	zombie = new Zombie(name, getType());

	return (zombie);
}