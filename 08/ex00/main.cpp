/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:11:39 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/11 11:11:41 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>
#include <set>
#include <map>
#include "easyfind.hpp"

template<typename T>
void easyfind(T &arr, int &find);

int main()
{
	std::set<int> cont;
	int k = 4;

	for (size_t i = 0; i < 5; i += 2)
	{
		cont.insert(i);
	}
	try
	{
		easyfind(cont, k);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}