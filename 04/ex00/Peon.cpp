/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:54 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:05:56 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim::Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a  pink pony !"
			  << std::endl;
}

Peon &Peon::operator=(Peon const &fix)
{
	if (this != &fix)
	{
		this->_name = fix.getName();
	}
	return (*this);
}

Peon::Peon(const Peon &vic) : Victim(vic)
{
	*this = vic;
}
