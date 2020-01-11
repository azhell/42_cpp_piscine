/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:05:25 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 12:05:26 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap a("gin");

	a.meleeAttack("Ri");
	a.vaulthunter_dot_exe("Ric");
	a.rangeAttack("Sim");
	a.takeDamage(80);
	a.beRapaired(40);
	a.vaulthunter_dot_exe("Ri");
	a.takeDamage(40);
	a.meleeAttack("ss");
	a.takeDamage(2);
	a.vaulthunter_dot_exe("Morty");
	a.beRapaired(40);
	a.vaulthunter_dot_exe("Kon");
	a.vaulthunter_dot_exe("Morty");
	FragTrap b = a;
	b.vaulthunter_dot_exe("Morty");

	std::cout << std::endl
			  << "----------------------"
			  << std::endl
			  << std::endl;

	ScavTrap c("Scag");
	c.challengeNewcomer();
	c.meleeAttack("Ri");
	c.rangeAttack("Sim");
	c.challengeNewcomer();
	c.takeDamage(80);
	c.beRapaired(40);
	c.challengeNewcomer();
	c.takeDamage(40);
	c.meleeAttack("ss");
	c.challengeNewcomer();
	c.takeDamage(2);
	c.beRapaired(40);
	c.challengeNewcomer();

	return (0);
}