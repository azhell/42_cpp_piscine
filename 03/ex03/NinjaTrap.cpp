/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:18:58 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 18:18:59 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Call NinjaTrap constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = 60;
	this->_maxHitPoint = 60;
	this->_energyPoint = 120;
	this->_maxEnergyPoint = 120;
	this->_level = 1;
	this->_melleAttackDmg = 60;
	this->_rangeAttackDmg = 5;
	this->_armorDmgReduct = 0;
	return;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Call NinjaTrap destructor" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &vic)
{
	*this = vic;
}


NinjaTrap &NinjaTrap::operator=(NinjaTrap const &fix)
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

void NinjaTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "Ninja: " << this->_name << " melee attack "
				  << target << ", causing " << this->_melleAttackDmg
				  << " points of damage !" << std::endl;
}

void NinjaTrap::rangeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "Ninja: " << this->_name << " range attack " << target
				  << ", causing " << this->_rangeAttackDmg << " points of damage !"
				  << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_armorDmgReduct)
	{
		amount -= this->_armorDmgReduct;
		if (amount >= this->_hitPoint)
		{
			this->_hitPoint = 0;
			std::cout << "Ninja: " << this->_name << " is dead !" << std::endl;
		}
		else
		{
			this->_hitPoint -= amount;
			std::cout << "Ninja " << this->_name << " take " << amount << " damage!"
					  << std::endl;
		}
	}
	else
	{
		std::cout << "Ninja " << this->_name << " damage reduct" << std::endl;
	}
}

void NinjaTrap::beRapaired(unsigned int amount)
{
	if ((this->_hitPoint + amount) > this->_maxHitPoint)
	{
		std::cout << "Ninja " << this->_name << " rapaired: "
				  << this->_maxHitPoint - this->_hitPoint << " point."
				  << std::endl;
		this->_hitPoint = this->_maxHitPoint;
	}
	else
	{
		std::cout << "Ninja " << this->_name << " rapaired: " << amount
				  << " point." << std::endl;
		this->_hitPoint += amount;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "Ninja -> Frag" << frag.getName() << "  " << std::endl;;
	frag.takeDamage(42);
}
void NinjaTrap::ninjaShoebox(ScavTrap &frag)
{
	std::cout << "Scav -> Frag" << frag.getName() << "  " << std::endl;;
	frag.takeDamage(21);
}
void NinjaTrap::ninjaShoebox(NinjaTrap &frag)
{
	std::cout << "Ninja -> Ninja" << frag.getName() << "  " << std::endl;;
	frag.takeDamage(32);
}