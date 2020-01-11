/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 20:02:00 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 20:02:01 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name, true),
										 NinjaTrap(name, true)
{
	std::cout << "Call SuperTrap constructor" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Call SuperTrap destructor" << std::endl;
}

void SuperTrap::rangeAttack(std::string const &target)
{
	FragTrap::rangeAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::rangeAttack(target);
}

SuperTrap::SuperTrap(const SuperTrap &vic) : FragTrap(vic), NinjaTrap(vic)
{
	*this = vic;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &fix)
{
	std::cout << "Assigment operator called" << std::endl;
	if (this != &fix)
	{
	}
	return (*this);
}