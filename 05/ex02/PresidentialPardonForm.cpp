/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:38:57 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 20:38:59 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5),
																	 _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &vic) : Form(vic)
{
	*this = (vic);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &fix)
{
	if (this != &fix)
	{
		this->_target = fix._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->getExecGrade() || !this->getSign())
		throw(Form::GradeTooLowException());
	std::cout << this->_target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}