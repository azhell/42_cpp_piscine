/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:59:02 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:59:03 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.Class.hpp"

Enemy::Enemy()
{
	this->_hp = 1;
	this->_isLife = 1;
	this->_direction = 1;
	this->_length = 1;
	return;
}

Enemy::Enemy(int hp, int length) : _hp(hp), _length(length)
{
	this->_isLife = 1;
	this->_direction = 1;
	return;
}

Enemy::~Enemy()
{
	return;
}

Enemy::Enemy(const Enemy &fix)
{
	*this = fix;
	return;
}

Enemy &Enemy::operator=(Enemy const &fix)
{
	if (this != &fix)
	{
		this->_posx = fix.getX();
		this->_posy = fix.getY();
		this->_hp = fix.getHP();
		this->_length = fix.getLength();
		this->_isLife = fix.getIsLife();
	}
	return (*this);
}

void Enemy::move(int pos, int max)
{
	if (this->_isLife == false)
		return;
	if (this->_direction == true)
	{
		this->_posx += pos;
		if (this->_posx + this->_length > max - 3)
		{
			this->_posx = max - _length - 2;
			this->_direction = false;
		}
	}
	else
	{
		this->_posx -= pos;
		if (this->_posx <= 0)
		{
			this->_posx = 1;
			this->_direction = true;
			this->_posy++;
		}
	}
}

void Enemy::makeShot(int dmg)
{
	this->_hp -= dmg;
	if (this->_hp <= 0)
	{
		this->_hp = 0;
		this->_isLife = 0;
	}
}

void Enemy::setHp(int hp)
{
	this->_hp = hp;
}

void Enemy::setLength(int length)
{
	this->_length = length;
}

int Enemy::getIsLife() const
{
	return (this->_isLife);
}

void Enemy::setPos(int x, int y)
{
	this->_posx = x;
	this->_posy = y;
}

int Enemy::getLength() const
{
	return (this->_length);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

int Enemy::getX() const
{
	return (this->_posx);
}

int Enemy::getY() const
{
	return (this->_posy);
}