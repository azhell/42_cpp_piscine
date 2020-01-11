/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conver.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:38:32 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 11:38:34 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conver.hpp"
#include <iomanip>

Conver::Conver(Conver const &src)
{
	*this = src;
}

Conver::~Conver()
{
	return;
}

Conver::Conver()
{
	return;
}


Conver &Conver::operator=(Conver const &src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void Conver::toChar(char *input)
{
	std::cout << "Char: ";
	try
	{
		int c;
		if (input[0] > 32 && isdigit(input[0]))
			c = std::stoi(input);
		else
			c = static_cast<char>(input[0]);
		if (c < 0 || c > 255)
			throw Conver::Impossible();
		if (std::isprint(static_cast<char>(c)))
			std::cout << static_cast<char>(c) << std::endl;
		else
			throw Conver::NotPrintable();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conver::toInt(char *input)
{
	std::cout << "Int: ";
	try
	{
		int i;
		if (input[0] > 32 && isdigit(input[0]))
			i = std::stoi(input);
		else
			i = static_cast<char>(input[0]);
		std::cout << static_cast<int>(i) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conver::toFloat(char *input)
{
	std::cout << "Float: ";
	try
	{
		float f;
		if (input[0] > 32 && isdigit(input[0]))
			f = std::stof(input);
		else
			f = static_cast<char>(input[0]);
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conver::toDouble(char *input)
{
	std::cout << "Double: ";
	try
	{
		double d;
		if (input[0] > 32 && isdigit(input[0]))
			d = std::stof(input);
		else
			d = static_cast<char>(input[0]);
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Conver::Impossible::Impossible() {}

Conver::Impossible::Impossible(Impossible const &src)
{
	*this = src;
}

Conver::Impossible::~Impossible() throw() {}

Conver::Impossible &Conver::Impossible::operator=(Impossible const &src)
{
	(void)src;
	return *this;
}

const char *Conver::Impossible::what() const throw()
{
	return "Impossible conver";
}

Conver::NotPrintable::NotPrintable() {}

Conver::NotPrintable::NotPrintable(NotPrintable const &src)
{
	*this = src;
}

Conver::NotPrintable::~NotPrintable() throw() {}

Conver::NotPrintable &Conver::NotPrintable::operator=(NotPrintable const &src)
{
	(void)src;
	return *this;
}

const char *Conver::NotPrintable::what() const throw()
{
	return "Not printable";
}
