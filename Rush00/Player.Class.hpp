/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:58:25 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:58:27 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Player
{
protected:
	int _posx;
	int _posy;
	int _hp;
	int	_dmgGive;

public:
	Player(int);
	Player &operator=(Player const &fix);
	Player(Player const &);
	~Player();
	void setHp(int);
	void setPosx(int);
	void setPosy(int);
	//void setDmgGive(int);
	//int getDmgGive(void) const;
	int getHp(void) const;
	int getPosx(void) const;
	int getPosy(void) const;
	void movePlayerLeft();
	void moveplayerRight();
};
