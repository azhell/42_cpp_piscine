/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:17 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:05:18 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name),
														  _title(title)
{
	std::cout << this->_name + ", " << this->_title << ", is born !"
			  << std::endl;
	return;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name + ", " << this->_title << ", is dead."
			  << "Consequences will never be the same !" << std::endl;
	return;
}

Sorcerer::Sorcerer(const Sorcerer &vic)
{
	*this = vic;
}


std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " + i.getName() + ", " + i.getTitle() + ", and I like ponies !\n";
	return (o);
}
Sorcerer &Sorcerer::operator=(Sorcerer const &fix)
{
	if (this != &fix)
	{
		this->_name = fix.getName();
		this->_title = fix.getTitle();
	}
	return (*this);
}

void Sorcerer::polymorph(Victim const &i) const
{
	i.getPolymorphed();
}