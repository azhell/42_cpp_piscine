/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:38:43 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 20:38:44 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
																	 _target(target)
{
	srand(time(0));
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &vic) : Form(vic)
{
	*this = (vic);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &fix)
{
	if (this != &fix)
	{
		this->_target = fix._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->getExecGrade() || !this->getSign())
		throw(Form::GradeTooLowException());
	if (rand() % 2 == 0)
		std::cout << this->_target + " has been robotomized successfully." << std::endl;
	else
		std::cout << "It’s a failure" << std::endl;
}
