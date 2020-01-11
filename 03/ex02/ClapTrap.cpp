/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:27:10 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 17:27:12 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "Call ClapTrap constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Call ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &vic)
{
	*this = vic;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &fix)
{
	std::cout << "Assigment operator called" << std::endl;
	if (this != &fix)
	{
		this->_hitPoint = fix.gethitPoint();
		this->_maxHitPoint = fix.getmaxHitPoint();
		this->_energyPoint = fix.getenergyPoint();
		this->_maxEnergyPoint = fix.getmaxEnergyPoint();
		this->_level = fix.getlevel();
		this->_melleAttackDmg = fix.getmelleAttackDmg();
		this->_rangeAttackDmg = fix.getrangeAttackDmg();
		this->_armorDmgReduct = fix.getarmorDmgReduct();
	}
	return (*this);
}

const std::string &ClapTrap::getName(void)
{
	return (this->_name);
}


unsigned int ClapTrap::gethitPoint() const
{
	return this->_hitPoint;
}

unsigned int ClapTrap::getmaxHitPoint() const
{
	return this->_maxHitPoint;
}

unsigned int ClapTrap::getenergyPoint() const
{
	return this->_energyPoint;
}

unsigned int ClapTrap::getmaxEnergyPoint() const
{
	return this->_maxEnergyPoint;
}

unsigned int ClapTrap::getlevel() const
{
	return this->_level;
}

unsigned int ClapTrap::getmelleAttackDmg() const
{
	return this->_melleAttackDmg;
}

unsigned int ClapTrap::getrangeAttackDmg() const
{
	return this->_rangeAttackDmg;
}

unsigned int ClapTrap::getarmorDmgReduct() const
{
	return this->_armorDmgReduct;
}