/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opakhovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:02:11 by opakhovs          #+#    #+#             */
/*   Updated: 2019/10/06 18:02:13 by opakhovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.class.hpp"

Asteroid::Asteroid()
{
	this->_length = 3;
	return;
}

Asteroid::~Asteroid()
{
	return;
}

void Asteroid::move(int max)
{
	srand(time(0));
	this->_posy++;
	if (this->_posy >= max - 1)
	{
		this->_posy = 1;
		this->_posx = rand() % max;
		if (this->_posx < 2)
			this->_posx += 2;
		if (this->_posx > max - 4)
			this->_posx -= 5;
	}
}

Asteroid::Asteroid(const Asteroid &fix)
{
	*this = fix;
	return;
}

Asteroid &Asteroid::operator=(Asteroid const &fix)
{
	if (this != &fix)
	{
		this->_length = fix.getLength();
		this->_posx = fix.getX();
		this->_posy = fix.getY();
	}
	return (*this);
}

void Asteroid::setPos(int x, int y)
{
	this->_posx = x;
	this->_posy = y;
}

void Asteroid::setLength(int val)
{
	this->_length = val;
}

int Asteroid::getLength() const
{
	return (this->_length);
}

int Asteroid::getX() const
{
	return (this->_posx);
}

int Asteroid::getY() const
{
	return (this->_posy);
}
