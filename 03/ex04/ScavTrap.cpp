/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:01:57 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 16:01:59 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Call ScavTrap constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 50;
	this->_maxEnergyPoint = 50;
	this->_level = 1;
	this->_melleAttackDmg = 20;
	this->_rangeAttackDmg = 15;
	this->_armorDmgReduct = 3;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &vic)
{
	*this = vic;
}


ScavTrap::~ScavTrap()
{
	std::cout << "Call ScavTrap destructor" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &fix)
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

void ScavTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "CLAP-TDI: " << this->_name << " melee attack "
				  << target << ", causing " << this->_melleAttackDmg
				  << " points of damage !" << std::endl;
}

void ScavTrap::rangeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "CLAP-TDI: " << this->_name << " range attack " << target
				  << ", causing " << this->_rangeAttackDmg << " points of damage !"
				  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_armorDmgReduct)
	{
		amount -= this->_armorDmgReduct;
		if (amount >= this->_hitPoint)
		{
			this->_hitPoint = 0;
			std::cout << "CLAP-TDI: " << this->_name << " is dead !" << std::endl;
		}
		else
		{
			this->_hitPoint -= amount;
			std::cout << "CLAP-TDI " << this->_name << " take " << amount << " damage!"
					  << std::endl;
		}
	}
	else
	{
		std::cout << "CLAP-TDI " << this->_name << " damage reduct" << std::endl;
	}
}

void ScavTrap::beRapaired(unsigned int amount)
{
	if ((this->_hitPoint + amount) > this->_maxHitPoint)
	{
		std::cout << "CLAP-TDI " << this->_name << " rapaired: "
				  << this->_maxHitPoint - this->_hitPoint << " point."
				  << std::endl;
		this->_hitPoint = this->_maxHitPoint;
	}
	else
	{
		std::cout << "CLAP-TDI " << this->_name << " rapaired: " << amount
				  << " point." << std::endl;
		this->_hitPoint += amount;
	}
}

void ScavTrap::challengeNewcomer()
{
	int rand = 1;
	int i;
	int times;

	times = time(nullptr);
	i = std::rand() % 13;
	std::srand(times - i);
	rand = std::rand() % 6;
	switch (rand)
	{
	case 1:
	{
		std::cout << "ScavTrap "
				  << "Yessss, look into my eyes."
				  << "You're getting sleepy. You're"
				  << "getting... zzzzzz... Zzzzzz..." << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "ScavTrap "
				  << "Sooooo... how are things?" << std::endl;
		break;
	}
	case 3:
	{
		std::cout << "ScavTrap "
				  << "Hocus pocus!" << std::endl;
		break;
	}
	case 4:
	{
		std::cout << "ScavTrap "
				  << "Look out everybody! Things are about to get awesome!"
				  << std::endl;
		break;
	}
	case 5:
	{
		std::cout << "ScavTrap "
				  << "Watch as we observe the rare and beautiful Clappy Bird!"
				  << std::endl;
		break;
	}
	}
}