/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:23:29 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 17:23:31 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool	_sign;
	const int		_beginGrade;
	const int		_exucuteGrade;
public:
	Form(std::string const, int const , int const);
	~Form();
	Form &operator=(Form const &fix);
	Form(const Form &);
	std::string getName() const;
	int getBeginGrade() const;
	int getExecGrade() const;
	bool getSign() const;
	void beSigned(Bureaucrat&);
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const &f);
		GradeTooHighException &operator=(GradeTooHighException const &fix);
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		~GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &f);
		GradeTooLowException &operator=(GradeTooLowException const &fix);
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Form const &i);