/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:44:17 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:44:19 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	this->_ap = 40;
	this->_equip = 0;
	return;
}

Character::~Character()
{
	return;
}

Character &Character::operator=(Character const &fix)
{
	if (this != &fix)
	{
		this->_name = fix.getName();
	}
	return (*this);
}

Character::Character(Character const &aw)
{
	*this = aw;
}

std::string Character::getName() const
{
	return (this->_name);
}

void Character::setAp(int ap)
{
	this->_ap = ap;
}

int Character::getAp() const
{
	return (this->_ap);
}

void Character::attack(Enemy *en)
{
	if (this->_equip != 0)
	{
		int dmg = this->_equip->getDamage();
		int cost = this->_equip->getAPCost();

		if (this->_ap > cost)
		{
			this->_ap -= cost;
			en->takeDamage(dmg);

			std::cout << this->_name + " attack " + en->getType() + " with a "
					  << this->_equip->getName() << std::endl;
			this->_equip->attack();
			if (en->getHp() <= 0)
				delete en;
		}
	}
}

std::string Character::getNameEq() const
{
	return (this->_equip->getName());
}

bool Character::inEquip() const
{
	if (this->_equip != 0)
		return (true);
	else
		return (false);
}

std::ostream &operator<<(std::ostream &o, Character const &i)
{
	if (i.inEquip())
		o << i.getName() + " has " << i.getAp()
		  << " AP and wields a " + i.getNameEq() << std::endl;
	else
		o << i.getName() + " has " << i.getAp()
		  << " AP and is unarmed" << std::endl;
	return (o);
}

void Character::equip(AWeapon *wep)
{
	this->_equip = wep;
}