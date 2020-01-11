/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:21:46 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 12:21:48 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat hhh("name", 20);
		std::cout << hhh;
		hhh.decrementGrade();
		std::cout << hhh;
		hhh.incrementGrade();
		std::cout << hhh;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat d("vi", 2);
		std::cout << d;
		d.decrementGrade();
		std::cout << d;
		d.decrementGrade();
		std::cout << d;
		d.decrementGrade();
		d.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}