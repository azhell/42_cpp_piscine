/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:44:00 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:44:03 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &aw) : Enemy(aw)
{
	*this = aw;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &fix)
{
	if (this != &fix)
	{
	}
	return (*this);
}

void RadScorpion::takeDamage(int d)
{
	int hp = getHp();

	if (hp <= d)
		setHp(0);
	else
		setHp(hp - d);
	if (hp <= 0)
	{
		RadScorpion::~RadScorpion();
	}
}