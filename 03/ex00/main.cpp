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
}