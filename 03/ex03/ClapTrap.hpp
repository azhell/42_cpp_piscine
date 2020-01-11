/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:27:18 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 17:27:20 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <ctime>

class ClapTrap
{

public:
	const std::string &getName(void) const;
	unsigned int gethitPoint() const;
	unsigned int getmaxHitPoint() const;
	unsigned int getenergyPoint() const;
	unsigned int getmaxEnergyPoint() const;
	unsigned int getlevel() const;
	unsigned int getmelleAttackDmg() const;
	unsigned int getrangeAttackDmg() const;
	unsigned int getarmorDmgReduct() const;
	ClapTrap &operator=(ClapTrap const &fix);

protected:
	ClapTrap(/* args */);
	ClapTrap(ClapTrap const&);
	std::string _name;
	~ClapTrap();
	unsigned int _hitPoint;
	unsigned int _maxHitPoint;
	unsigned int _energyPoint;
	unsigned int _maxEnergyPoint;
	unsigned int _level;
	unsigned int _melleAttackDmg;
	unsigned int _rangeAttackDmg;
	unsigned int _armorDmgReduct;
};

#endif