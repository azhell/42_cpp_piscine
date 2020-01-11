/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:38:47 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 20:38:49 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ctime>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &fix);
	RobotomyRequestForm(const RobotomyRequestForm &);
	void execute(Bureaucrat const &executor) const;
	~RobotomyRequestForm();
};
