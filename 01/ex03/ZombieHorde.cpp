/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:32:24 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 14:32:25 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	std::cout << "Horde constructor\n";
	if (n < 1 || n > 100)
	{
		std::cout << "NO!!!\n";
		n = 1;
	}
	zombie = new Zombie[n];
	_n = n;
	announce();
	return;
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombie;
	std::cout << "Delete Zombie\n";
}

void ZombieHorde::announce()
{
	int i = 0;
	while (i < _n)
	{
		std::cout << zombie[i].getName() << "  < Braaaaainsss\n";
		i++;
	}
}