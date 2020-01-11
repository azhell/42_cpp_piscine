/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:32:23 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:32:26 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	std::cout << "\nStack\n";
	Zombie zombie2("Hreed", "tt");

	std::cout << "Heap\n";
	Zombie *zombie1 = new Zombie("Jinn", "Bree");

	ZombieEvent event;

	event.setZombieType("piki");
	Zombie *zomb = event.newZombie("Greg");

	event.setZombieType("Nirr");
	event.randChump();

	delete (zomb);
	delete (zombie1);
	return (0);
}