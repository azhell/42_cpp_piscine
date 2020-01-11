/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:59:28 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:59:30 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Bullet
{
  private:
	int _posx;
	int _posy;

  public:
	Bullet();
	Bullet &operator=(Bullet const &fix);
	Bullet(Bullet const &);
	~Bullet();
	void setPos(int, int);
	void move(bool);
	int getX() const;
	int getY() const;
};