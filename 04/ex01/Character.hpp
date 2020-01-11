/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:44:21 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:44:23 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
#define Character_H

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	AWeapon *_equip;
	int		_ap;
public:
	Character(std::string const &name);
	~Character();
	void recoverAP();
	Character &operator=(Character const &fix);
	Character(Character const &);
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string getName() const;
	int getAp() const;
	void setAp(int);
	bool inEquip() const;
	std::string getNameEq() const;
};

std::ostream &operator<<(std::ostream &o, Character const &i);

#endif