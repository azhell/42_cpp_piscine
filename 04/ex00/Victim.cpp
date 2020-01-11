/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:31 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:05:32 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " + this->_name + " just popped !"
			  << std::endl;
	return;
}

Victim::Victim(const Victim &vic)
{
	*this = vic;
}

Victim::~Victim()
{
	std::cout << "Victim " + this->_name + " just died for no apparent reason !"
			  << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &o, Victim const &i)
{
	o << "I'am " + i.getName() + " and I like otters !" << std::endl;
	return (o);
}

std::string Victim::getName() const
{
	return (this->_name);
}

Victim &Victim::operator=(Victim const &fix)
{
	if (this != &fix)
	{
		this->_name = fix.getName();
	}
	return (*this);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !"
			  << std::endl;
}

void Victim::setName(std::string name)
{
	this->_name = name;
}