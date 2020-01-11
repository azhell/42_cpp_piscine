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
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat hhh("name", 150);
	//	Form form("za", 60, 100);
		ShrubberyCreationForm st("HI");
		st.beSigned(hhh);
		RobotomyRequestForm ss("tar");
		ss.beSigned(hhh);
		PresidentialPardonForm pr("pr");
		pr.beSigned(hhh);
		st.execute(hhh);
		ss.execute(hhh);
		pr.execute(hhh);
	}
	catch (const std::exception &e)
	{
					std::cout << e.what() << std::endl;
	}
	return (0);
}