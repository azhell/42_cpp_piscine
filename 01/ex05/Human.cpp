/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:34:27 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 17:34:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(/* args */)
{
	return;
}

Human::~Human()
{
	return;
}


Brain	Human::getBrain()
{
	return this->br;
}

std::string Human::identify() const
{
	return this->br.identify();
}