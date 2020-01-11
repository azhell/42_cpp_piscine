/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:11:50 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/11 11:11:51 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <set>

template<typename T>
void easyfind(T &arr, int &find)
{
	typename T::iterator f = arr.find(find);
	if (f != arr.end())
		std::cout << "Elem find: " << *f << std::endl;
	else
		std::cout << "Elem no find." << std::endl;
}
