/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 18:43:18 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 18:43:20 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->_type = str;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void)
{
	const std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string ty)
{
	this->_type = ty;
}