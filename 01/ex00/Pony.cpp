/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:10:48 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:10:50 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	return;
}

Pony::~Pony()
{
	return;
}

void Pony::setAge(std::string str)
{
	this->_age = str;
}

void Pony::setName(std::string str)
{
	this->_name = str;
}

void Pony::setColor(std::string str)
{
	this->_color = str;
}

void Pony::setSecret(std::string str)
{
	this->_secret = str;
}

std::string Pony::getAge(void)
{
	return (this->_age);
}

std::string Pony::getColor(void)
{
	return (this->_color);
}

std::string Pony::getName(void)
{
	return (this->_name);
}

std::string Pony::getSecret(void)
{
	return (this->_secret);
}