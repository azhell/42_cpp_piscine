/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:33:09 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/09 13:33:10 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conver.hpp"
#include <iostream>

int main(int ac, char **av)
{
	Conver conv;

	for (int i = 1; i < ac; i++)
	{
		conv.toChar(av[i]);
		conv.toInt(av[i]);
		conv.toFloat(av[i]);
		conv.toDouble(av[i]);
	}
	return 0;
}
