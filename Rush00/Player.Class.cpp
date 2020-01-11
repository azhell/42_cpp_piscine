/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:58:31 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:58:33 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.Class.hpp"
#include "ncurses.h"

Player::Player(int	hp) : _hp(hp)
{
	_hp = 3;
	return;
}

Player::~Player()
{
	return;
}

Player &Player ::operator=(Player const &fix)
{
	if (this != &fix)
	{
		this->_hp = fix.getHp();
		this->_posx = fix.getPosx();
		this->_posy = fix.getPosy();
	}
	return (*this);
}

Player::Player(const Player &fix)
{
	*this = fix;
	return;
}

int Player::getHp() const
{
	return (this->_hp);
}

/*int Player::getDmgGive() const
{
	return (this->_dmgGive);
}*/

int Player::getPosx() const
{
	return (this->_posx);
}

int Player::getPosy() const
{
	return (this->_posy);
}

void Player::setHp(int d)
{
	this->_hp = d;
}

/*void Player::setDmgGive(int d)
{
	this->_dmgGive = d;
}*/

void Player::setPosx(int d)
{
	this->_posx = d;
}

void Player::setPosy(int d)
{
	this->_posy = d;
}

void Player::movePlayerLeft()
{
		this->_posx--;
}

void Player::moveplayerRight()
{
	this->_posx++;
}