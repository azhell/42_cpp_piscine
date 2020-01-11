/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Backgrd.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:55:49 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 18:55:51 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Backgrd.Class.hpp"

Backgrd::Backgrd()
{
	return;
}

Backgrd::~Backgrd()
{
	return;
}

void Backgrd::move(int max)
{
	this->_posy++;
	if (this->_posy >= max - 1)
		this->_posy = 1;
}

Backgrd::Backgrd(const Backgrd &fix)
{
	*this = fix;
	return;
}

Backgrd &Backgrd::operator=(Backgrd const &fix)
{
	if (this != &fix)
	{
		this->_posx = fix.getX();
		this->_posy = fix.getY();
	}
	return (*this);
}

void Backgrd::setPos(int x, int y)
{
	this->_posx = x;
	this->_posy = y;
}

int Backgrd::getX() const
{
	return (this->_posx);
}

int Backgrd::getY() const
{
	return (this->_posy);
}