/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:59:34 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:59:36 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.Class.hpp"

Bullet::Bullet()
{
	return;
}

Bullet::~Bullet()
{
	return;
}

void Bullet::move(bool up)
{
	if (up)
		this->_posy--;
	else
		this->_posy++;
}

Bullet::Bullet(const Bullet &fix)
{
	*this = fix;
	return;
}

Bullet &Bullet::operator=(Bullet const &fix)
{
	if (this != &fix)
	{
		this->_posx = fix.getX();
		this->_posy = fix.getY();
	}
	return (*this);
}

void Bullet::setPos(int x, int y)
{
	this->_posx = x;
	this->_posy = y;
}

int Bullet::getX() const
{
	return (this->_posx);
}

int Bullet::getY() const
{
	return (this->_posy);
}