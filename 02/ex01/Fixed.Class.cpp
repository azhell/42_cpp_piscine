/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:40:28 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/02 13:40:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called." << std::endl;
	_fixedPointVal = 0;
	return;
}

Fixed::Fixed(int i)
{
	std::cout << "Int construcotr called" << std::endl;
	this->_fixedPointVal = i << this->_fractBit;
}

Fixed::Fixed(double d)
{
	std::cout << "Float construcotr called" << std::endl;
	this->_fixedPointVal = roundf(d * (1 << this->_fractBit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
	return;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy construcotr called" << std::endl;
	*this = fix;
	return;
}

float Fixed::toFloat(void) const
{
	return ((double)this->_fixedPointVal / (double)(1 << this->_fractBit));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointVal >> this->_fractBit);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointVal = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointVal);
}

Fixed &Fixed::operator=(Fixed const &fix)
{
	std::cout << "Assigment operator called" << std::endl;
	if (this != &fix)
	{
		this->_fixedPointVal = fix.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}