/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:32:27 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 14:32:28 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <ctime>

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();

private:
	Zombie *zombie;
	int _n;
};

#endif