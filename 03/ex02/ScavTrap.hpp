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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:


public:
	ScavTrap(std::string);
	~ScavTrap();
	ScavTrap(ScavTrap const&);
	ScavTrap &operator=(ScavTrap const &fix);
	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
	void challengeNewcomer(void);

};

#endif