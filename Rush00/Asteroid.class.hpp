/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opakhovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:01:55 by opakhovs          #+#    #+#             */
/*   Updated: 2019/10/06 18:01:56 by opakhovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "ctime"

class Asteroid
{
  private:
	int _posx;
	int _posy;
	int _length;

  public:
	Asteroid();
	Asteroid &operator=(Asteroid const &fix);
	Asteroid(Asteroid const &);
	~Asteroid();
	void setPos(int, int);
	void move(int);
	void setLength(int);
	int getLength() const;
	int getX() const;
	int getY() const;
};
