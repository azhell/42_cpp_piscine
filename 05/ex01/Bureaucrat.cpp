/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:21:27 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/08 12:21:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSign())
		std::cout << this->getName() << " signing is successful" << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << form.getName()
				  << " because "
				  << "low grade " << this->getGrade() << " < " << form.getBeginGrade()
				  << std::endl;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() + ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}

Bureaucrat::Bureaucrat(const Bureaucrat &vic)
{
	*this = (vic);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &fix)
{
	if (this != &fix)
	{
		this->_grade = fix.getGrade();
	}
	return (*this);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade >= 150)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade++;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade <= 1)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade--;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &f)
{
	*this = f;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &f)
{
	*this = f;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

char const *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade High";
}

char const *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade Low";
}