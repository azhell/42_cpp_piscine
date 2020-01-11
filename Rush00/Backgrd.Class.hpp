/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Backgrd.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:55:57 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 18:55:58 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Backgrd
{
  private:
	int _posx;
	int _posy;

  public:
	Backgrd();
	Backgrd &operator=(Backgrd const &fix);
	Backgrd(Backgrd const &);
	~Backgrd();
	void setPos(int, int);
	void move(int);
	int getX() const;
	int getY() const;
};
