/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 21:50:42 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 21:50:45 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->_count = 0;
	this->_maxCount = 16;
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	int i;

	i = 0;
	while (i < this->_count)
	{
		delete this->_marine[i];
		i++;
	}
}

Squad &Squad::operator=(Squad const &rhs)
{
	int i;
	ISpaceMarine *cpy;

	if (this != &rhs)
	{
		i = 0;
		while (i < this->_count)
		{
			cpy = this->_marine[i]->clone();
			delete this->_marine[i];
			this->_marine[i] = cpy;
			i++;
		}
		this->_count = rhs._count;
		this->_maxCount = rhs._maxCount;
	}
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (index < this->_count && index >= 0)
		return (this->_marine[index]);
	return (0);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == 0)
		return (this->_count);
	if (this->_count < this->_maxCount)
	{
		this->_marine[this->_count] = unit;
		this->_count++;
	}
	return (this->_count);
}