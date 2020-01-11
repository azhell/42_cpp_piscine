/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:10:38 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:10:40 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyInHeap()
{
	Pony *pony;
	pony = new Pony();
	std::cout << "Pony in heap\n";
	delete pony;
	std::cout << "Delete Pony\n";
}

void ponyInStack()
{
	Pony pony;
	std::cout << "Pony in Stack\n";
}

int main(void)
{
	std::cout << "Create pony:\n";
	ponyInHeap();
	ponyInStack();
	std::cout << "Pony is dead\n";
	return (0);
}