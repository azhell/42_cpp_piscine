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

#include <iostream>
#include <string>
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde horde = ZombieHorde(-1);
	horde.announce();
	return (0);
}