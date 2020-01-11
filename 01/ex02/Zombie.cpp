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

Zombie::Zombie(std::string name, std::string type)
{
	setName(name);
	setType(type);
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Kill zombie: " << getName() << "\n";
}

void Zombie::announce(void)
{
	std::cout << getName() << " (" << getType()
			  << ") >   Braaaainnnnss..\n";
}

void Zombie::setName(std::string str)
{
	this->_name = str;
}

void Zombie::setType(std::string str)
{
	this->_type = str;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

std::string Zombie::getType(void)
{
	return (this->_type);
}