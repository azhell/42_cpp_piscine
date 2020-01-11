/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:17 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:20 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp),
												_type(type)
{
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy::Enemy(Enemy const &aw)
{
	*this = aw;
}

int	Enemy::getHp() const
{
	return (this->_hp);
}

std::string Enemy::getType() const
{
	return (this->_type);
}

Enemy &Enemy::operator=(Enemy const &fix)
{
	if (this != &fix)
	{
		this->_hp = fix.getHp();
		this->_type = fix.getType();
	}
	return (*this);
}

void Enemy::setHp(int hp)
{
	this->_hp = hp;
}