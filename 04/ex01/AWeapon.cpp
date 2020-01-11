/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:42:21 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:42:25 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
																	_damage(damage),
																	_apCost(apcost)
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon &AWeapon::operator=(AWeapon const &fix)
{
	if (this != &fix)
	{
		this->_name = fix.getName();
		this->_apCost = fix.getAPCost();
		this->_damage = fix.getDamage();
	}
	return (*this);
}

AWeapon::AWeapon(AWeapon const &aw)
{
	*this = aw;
}

std::string AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apCost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}