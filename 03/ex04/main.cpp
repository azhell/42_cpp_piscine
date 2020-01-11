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
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{

	SuperTrap n("name");

	//std::cout << n.getenergyPoint() << " " << n.gethitPoint() << std::endl;
//	n.rangeAttack("1cxs");
	n.meleeAttack("asda");
	n.rangeAttack("sd");
}