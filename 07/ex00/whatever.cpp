/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:26:34 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 19:26:36 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T const &max(T &x, T &y)
{
	if (x <= y)
		return (y);
	else
		return (x);
}

template <typename T>
T const &min(T &x, T &y)
{
	if (x >= y)
		return (y);
	else
		return (x);
}

template <typename T>
void swap(T &x, T &y)
{
		T tmp = y;
		y = x;
		x = tmp;
}

int main(void)
{
	int a = 2;
	int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}
