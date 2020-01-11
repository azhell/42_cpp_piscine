/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:59:05 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:59:07 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Enemy
{
  private:
	int _isLife;
	int _hp;
	int _posx;
	int _posy;
	bool _direction;
	int _length;

  public:
	Enemy(/* args */);
	Enemy(int hp, int length);
	Enemy(const Enemy &fix);
	Enemy &operator=(Enemy const &fix);
	~Enemy();
	void makeShot(int dmg);
	void setPos(int, int);
	void move(int, int);
	void setHp(int);
	void setLength(int);
	int getHP() const;
	int getLength() const;
	int getX() const;
	int getY() const;
	int getIsLife() const;
};
