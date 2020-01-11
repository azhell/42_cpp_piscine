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

	bool operator>(Fixed const &fix) const;
	bool operator<(Fixed const &fix) const;
	bool operator>=(Fixed const &fix) const;
	bool operator<=(Fixed const &fix) const;
	bool operator==(Fixed const &fix) const;
	bool operator!=(Fixed const &fix) const;

	Fixed operator+(Fixed const &fix) const;
	Fixed operator-(Fixed const &fix) const;
	Fixed operator*(Fixed const &fix) const;
	Fixed operator/(Fixed const &fix) const;

	Fixed operator++(int);
	Fixed &operator++(void);
	Fixed operator--(int);
	Fixed &operator--(void);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	static Fixed &max(Fixed &s1, Fixed &s2);
	static Fixed const &max(Fixed const &s1, Fixed const &s2);
	static Fixed &min(Fixed &s1, Fixed &s2);
	static Fixed const &min(Fixed const &s1, Fixed const &s2);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif