/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:05:40 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 12:05:42 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_level = 1;
	this->_melleAttackDmg = 30;
	this->_rangeAttackDmg = 20;
	this->_armorDmgReduct = 5;
	this->_punchDmg = 10;
	this->_simplPunchDmg = 8;
	this->_strongPunchDmg = 19;
	this->_multiPunchDmg = 42;
	this->_greatPunchDmg = 9999;
	return;
}

FragTrap::~FragTrap()
{
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &fix)
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
		this->_punchDmg = fix.getpunchDmg();
		this->_simplPunchDmg = fix.getsimplPunchDmg();
		this->_strongPunchDmg = fix.getstrongPunchDmg();
		this->_multiPunchDmg = fix.getmultiPunchDmg();
		this->_greatPunchDmg = fix.getgreatPunchDmg();
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &vic)
{
	*this = vic;
}

const std::string &FragTrap::getName(void)
{
	return (this->_name);
}

void FragTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name << " melee attack "
				  << target << ", causing " << this->_melleAttackDmg
				  << " points of damage !" << std::endl;
}

void FragTrap::rangeAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name << " range attack " << target
				  << ", causing " << this->_rangeAttackDmg << " points of damage !"
				  << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_armorDmgReduct)
	{
		amount -= this->_armorDmgReduct;
		if (amount >= this->_hitPoint)
		{
			this->_hitPoint = 0;
			std::cout << "FR4G-TP " << this->_name << " is dead !" << std::endl;
		}
		else
		{
			this->_hitPoint -= amount;
			std::cout << "FR4G-TP " << this->_name << " take " << amount << " damage!"
					  << std::endl;
		}
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " damage reduct" << std::endl;
	}
}

void FragTrap::beRapaired(unsigned int amount)
{
	if ((this->_hitPoint + amount) > this->_maxHitPoint)
	{
		std::cout << "FR4G-TP " << this->_name << " rapaired: "
				  << this->_maxHitPoint - this->_hitPoint << " point."
				  << std::endl;
		this->_hitPoint = this->_maxHitPoint;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " rapaired: " << amount
				  << " point." << std::endl;
		this->_hitPoint += amount;
	}
}
unsigned int FragTrap::gethitPoint() const
{
	return this->_hitPoint;
}

unsigned int FragTrap::getmaxHitPoint() const
{
	return this->_maxHitPoint;
}

unsigned int FragTrap::getenergyPoint() const
{
	return this->_energyPoint;
}

unsigned int FragTrap::getmaxEnergyPoint() const
{
	return this->_maxEnergyPoint;
}

unsigned int FragTrap::getlevel() const
{
	return this->_level;
}

unsigned int FragTrap::getmelleAttackDmg() const
{
	return this->_melleAttackDmg;
}

unsigned int FragTrap::getrangeAttackDmg() const
{
	return this->_rangeAttackDmg;
}

unsigned int FragTrap::getarmorDmgReduct() const
{
	return this->_armorDmgReduct;
}

unsigned int FragTrap::getpunchDmg(void) const
{
	return this->_punchDmg;
}
unsigned int FragTrap::getsimplPunchDmg(void) const
{
	return this->_simplPunchDmg;
}
unsigned int FragTrap::getstrongPunchDmg(void) const
{
	return this->_strongPunchDmg;
}
unsigned int FragTrap::getmultiPunchDmg(void) const
{
	return this->_multiPunchDmg;
}
unsigned int FragTrap::getgreatPunchDmg(void) const
{
	return this->_greatPunchDmg;
}

void FragTrap::punchAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name
				  << " Step right up, to the Bulletnator 9000! " << target << ", causing "
				  << this->_punchDmg << " points of damage !" << std::endl;
}

void FragTrap::simplePunchAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name
				  << " I am a tornado of death and bullets! " << target << ", causing "
				  << this->_simplPunchDmg << " points of damage !" << std::endl;
}
void FragTrap::strongPuchAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name
				  << " Hehehehe, mwaa ha ha ha, MWAA HA HA HA! " << target << ", causing "
				  << this->_strongPunchDmg << " points of damage !" << std::endl;
}
void FragTrap::multiPunchAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name
				  << " Ha ha ha! Fall before your robot overlord! " << target << ", causing "
				  << this->_multiPunchDmg << " points of damage !" << std::endl;
}
void FragTrap::greatPunchAttack(std::string const &target)
{
	if (this->_hitPoint > 0)
		std::cout << "FR4G-TP " << this->_name
				  << " ONE PUNCHH!! " << target << ", causing "
				  << this->_greatPunchDmg << " points of damage !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int rand = 1;
	int i;
	std::string name;
	int times;

	if (this->_energyPoint >= 25)
	{
		times = time(nullptr);
		i = std::rand() % 13;
		std::srand(times - i);
		rand = std::rand() % 6;
		switch (rand)
		{
			case 1:
			{
				this->punchAttack(target);
				break;
			}
			case 2:
			{
				this->greatPunchAttack(target);
				break;
			}
			case 3:
			{
				this->strongPuchAttack(target);
				break;
			}
			case 4:
			{
				this->multiPunchAttack(target);
				break;
			}
			case 5:
			{
				this->simplePunchAttack(target);
				break;
			}
		}
		this->_energyPoint -= 25;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name
				  << " Need more energy point;" << std::endl;
	}
}