/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:40:23 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/02 13:40:24 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDCLASS_H
#define FIXEDCLASS_H

#include <cmath>
#include <iostream>

class Fixed
{
private:
	int _fixedPointVal;
	static const int _fractBit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(int i);
	Fixed(double d);
	Fixed(const Fixed &fix);
	Fixed &operator=(Fixed const &fix);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif