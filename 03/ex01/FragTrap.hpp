/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:05:44 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 12:05:46 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <ctime>

class FragTrap
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
	unsigned int _punchDmg;
	unsigned int _simplPunchDmg;
	unsigned int _strongPunchDmg;
	unsigned int _multiPunchDmg;
	unsigned int _greatPunchDmg;

public:
	FragTrap(std::string);
	~FragTrap();
	FragTrap &operator=(FragTrap const &fix);
	const std::string &getName(void);
	FragTrap(FragTrap const&);
	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);

	void punchAttack(std::string const &target);
	void simplePunchAttack(std::string const &target);
	void strongPuchAttack(std::string const &target);
	void multiPunchAttack(std::string const &target);
	void greatPunchAttack(std::string const &target);

	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	unsigned int gethitPoint() const;
	unsigned int getmaxHitPoint() const;
	unsigned int getenergyPoint() const;
	unsigned int getmaxEnergyPoint() const;
	unsigned int getlevel() const;
	unsigned int getmelleAttackDmg() const;
	unsigned int getrangeAttackDmg() const;
	unsigned int getarmorDmgReduct() const;
	unsigned int getpunchDmg(void) const;
	unsigned int getsimplPunchDmg(void) const;
	unsigned int getstrongPunchDmg(void) const;
	unsigned int getmultiPunchDmg(void) const;
	unsigned int getgreatPunchDmg(void) const;
};

#endif