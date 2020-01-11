/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:02:03 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 16:02:04 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <ctime>

#include <iostream>
#include <ctime>

class ScavTrap
{
private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _maxHitPoint;
	unsigned int _energyPoint;
	unsigned int _maxEnergyPoint;
	unsigned int _level;
	unsigned int _melleAttackDmg;
	unsigned int _rangeAttackDmg;
	unsigned int _armorDmgReduct;

public:
	ScavTrap(std::string);
	~ScavTrap();
	ScavTrap(ScavTrap const&);
	ScavTrap &operator=(ScavTrap const &fix);
	const std::string &getName(void);
	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void challengeNewcomer(void);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
	unsigned int gethitPoint() const;
	unsigned int getmaxHitPoint() const;
	unsigned int getenergyPoint() const;
	unsigned int getmaxEnergyPoint() const;
	unsigned int getlevel() const;
	unsigned int getmelleAttackDmg() const;
	unsigned int getrangeAttackDmg() const;
	unsigned int getarmorDmgReduct() const;
};

#endif