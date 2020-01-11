/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:42:40 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 20:42:44 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, size_t N>
void iter(T (&arr)[N], size_t len, void (*func)(T &t))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

template <typename T>
void zaz(T arr)
{
	arr++;
}

int main()
{
	int adfff[5] = {1, 2, 3, 4, 5};
	iter(adfff, 5, zaz);

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << adfff[i] << std::endl;
	}
	return (0);
}