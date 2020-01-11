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
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	FragTrap(std::string name, bool b);
private:
	unsigned int _punchDmg;
	unsigned int _simplPunchDmg;
	unsigned int _strongPunchDmg;
	unsigned int _multiPunchDmg;
	unsigned int _greatPunchDmg;

public:
	FragTrap(std::string);
	~FragTrap();
	FragTrap(FragTrap const&);
	FragTrap &operator=(FragTrap const &fix);
	void punchAttack(std::string const &target);
	void simplePunchAttack(std::string const &target);
	void strongPuchAttack(std::string const &target);
	void multiPunchAttack(std::string const &target);
	void greatPunchAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);

	virtual void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
	unsigned int getpunchDmg(void) const;
	unsigned int getsimplPunchDmg(void) const;
	unsigned int getstrongPunchDmg(void) const;
	unsigned int getmultiPunchDmg(void) const;
	unsigned int getgreatPunchDmg(void) const;
};

#endif