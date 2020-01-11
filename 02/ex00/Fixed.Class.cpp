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

void Fixed::setRawBits(int const raw)
{
	std::cout << "SetRawBits called" << std::endl;
	this->_fixedPointVal = raw;
}

int	 Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits called" << std::endl;
	return (this->_fixedPointVal);
}

Fixed &Fixed::operator=(Fixed const & fix)
{
	std::cout << "Assigment operator called" << std::endl;
	if (this != &fix)
	{
		this->_fixedPointVal = fix.getRawBits();
	}
	return (*this);
}