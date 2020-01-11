/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:40:48 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/11 14:40:50 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _maxN(n)
{
	this->_count = 0;
	this->_minSpan = 0;
	this->_maxSpan = 0;
	return;
}

Span::~Span()
{
	return;
}

void Span::addNumber(int num)
{
	if (this->_count < this->_maxN)
	{

		this->_arr.insert(num);
		this->_count++;
		if (this->_count > 2)
		{
			std::multiset<int>::iterator one = this->_arr.begin();
			std::multiset<int>::iterator last = this->_arr.end();
			std::multiset<int>::iterator two = this->_arr.begin();
			last--;
			two++;
			this->_maxSpan = *last - *one;
			if (*one == 0)
				this->_maxSpan++;
			this->_minSpan = *two - *one;
		}
	}
	else
		throw(Span::Arrfull());
}

int Span::shortestSpan() const
{
	if (this->_count > 1)
	{
		return (this->_minSpan);
	}
	else
		throw(Span::Noelem());
}

int Span::longestSpan() const
{
	if (this->_count > 2)
	{
		return (this->_maxSpan);
	}
	else
		throw(Span::Noelem());
}

char const *Span::Noelem::what(void) const throw()
{
	return "No elem";
}

char const *Span::Nospan::what(void) const throw()
{
	return "Grade High";
}

char const *Span::Arrfull::what(void) const throw()
{
	return "Array full";
}

void Span::printSet()
{
	for (std::multiset<int>::iterator i = this->_arr.begin(); i != this->_arr.end(); ++i)
	{
		std::cout << ' ' << *i;
	}
}

Span::Noelem::Noelem(void) {}
Span::Noelem::~Noelem(void) throw() {}
Span::Noelem::Noelem(Noelem const &f)
{
	*this = f;
}

Span::Nospan::Nospan(void) {}
Span::Nospan::~Nospan(void) throw() {}
Span::Nospan::Nospan(Nospan const &f)
{
	*this = f;
}

Span::Arrfull::Arrfull(void) {}
Span::Arrfull::~Arrfull(void) throw() {}
Span::Arrfull::Arrfull(Arrfull const &f)
{
	*this = f;
}

Span::Arrfull &Span::Arrfull::operator=(Span::Arrfull const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

Span::Noelem &Span::Noelem::operator=(Span::Noelem const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}

Span::Nospan &Span::Nospan::operator=(Span::Nospan const &fix)
{
	std::exception::operator=(fix);
	return (*this);
}
