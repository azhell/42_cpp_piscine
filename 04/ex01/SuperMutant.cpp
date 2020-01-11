/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:29 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:31 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &aw) : Enemy(aw)
{
	*this = aw;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &fix)
{
	if (this != &fix)
	{
	}
	return (*this);
}

void SuperMutant::takeDamage(int d)
{
	int dmg = d - 3;
	int hp = getHp();

	if (hp <= dmg)
		setHp(0);
	else
		setHp(hp - dmg);
}