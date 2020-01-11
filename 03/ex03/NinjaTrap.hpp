/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:19:02 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 18:19:03 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
public:
	NinjaTrap(std::string);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const &fix);
	NinjaTrap(NinjaTrap const&);
	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
	void ninjaShoebox(FragTrap &frag);
	void ninjaShoebox(ScavTrap &frag);
	void ninjaShoebox(NinjaTrap &frag);
};

#endif