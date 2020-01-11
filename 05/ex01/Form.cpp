/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:23:24 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 17:23:26 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const begin, int const execu) : _name(name),
																	   _beginGrade(begin),
																	   _exucuteGrade(execu)

{
	if (begin > 150 || execu > 150)
		throw(Form::GradeTooHighException());
	if (begin < 1 || execu < 1)
		throw(Form::GradeTooLowException());
	this->_sign = false;
	return;
}

Form::~Form()
{
	return;
}
void Form::beSigned(Bureaucrat &be)
{
	if (be.getGrade() < this->_beginGrade)
		throw(Form::GradeTooLowException());
	this->_sign = true;
	be.signForm(*this);

}

Form::Form(const Form &vic) : _name(vic.getName()),
							  _beginGrade(vic.getBeginGrade()),
							  _exucuteGrade(vic.getExecGrade())
{
	*this = (vic);
}

Form &Form::operator=(Form const &fix)
{
	if (this != &fix)
	{
		this->_sign = fix._sign;
	}
	return (*this);
}

std::string Form::getName() const
{
	return this->_name;
}

int Form::getBeginGrade() const
{
	return this->_beginGrade;
}

int Form::getExecGrade() const
{
	return this->_exucuteGrade;
}

bool Form::getSign() const
{
	return this->_sign;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() + ", sign:  " << i.getSign() << " , min grade " << i.getBeginGrade()
	  << " exec grade: " << i.getExecGrade() << std::endl;
	return (o);
}

Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &f)
{
	*this = f;
}

Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &f)
{
	*this = f;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

char const *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade High";
}

char const *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade Low";
}