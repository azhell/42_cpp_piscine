/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:34:08 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 17:34:09 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	void const *adr1 = static_cast<const void *>(this);
	std::stringstream adr2;
	adr2 << adr1;
	this->_memory = adr2.str();
	return;
}

Brain::~Brain()
{
	return;
}

std::string Brain::identify(void) const
{
	return (this->_memory);
}