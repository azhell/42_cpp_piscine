/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:21:16 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 18:21:17 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <ctime>
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

void identify_from_pointer(Base *p)
{
	try
	{
		ClassA *b = dynamic_cast<ClassA *>(p);
		if (b != 0)
			std::cout << "This ClassA" << std::endl;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		ClassB *b = dynamic_cast<ClassB *>(p);
		if (b != 0)
			std::cout << "This ClassB" << std::endl;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		ClassC *b = dynamic_cast<ClassC *>(p);
		if (b != 0)
			std::cout << "This ClassB" << std::endl;
	}
	catch (const std::exception &e)
	{
	}
}

void identify_from_reference(Base &p)
{
	try
	{
		ClassA &b = dynamic_cast<ClassA &>(p);
		std::cout << "This ClassA" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		ClassB &b = dynamic_cast<ClassB &>(p);
		std::cout << "This ClassB" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		ClassC &b = dynamic_cast<ClassC &>(p);
		std::cout << "This ClassB" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception &e)
	{
	}
}

Base *generate()
{
	srand(time(0));
	switch (rand() % 3)
	{
	case 0:
	{
		return (dynamic_cast<Base *>(new ClassA()));
		break;
	}
	case 1:
	{
		return (dynamic_cast<Base *>(new ClassB()));
		break;
	}
	case 2:
	{
		return (dynamic_cast<Base *>(new ClassC()));
		break;
	}
	}
	return (0);
}

int main()
{
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}