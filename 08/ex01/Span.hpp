/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:40:54 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/11 14:40:55 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>

class Span
{
private:
	Span();
	Span &operator=(Span const &fix);
	Span(Span const &);
	const unsigned int _maxN;
	unsigned int _count;
	int _minSpan;
	int _maxSpan;
	std::multiset<int> _arr;
public:
	Span(unsigned int);
	void addNumber(int);
	void printSet();
	int shortestSpan() const;
	int longestSpan() const;

	class Nospan : public std::exception
	{
	public:
		Nospan();
		~Nospan() throw();
		const char *what(void) const throw();
		Nospan(Nospan const &src);
		Nospan &operator=(Nospan const &src);
	};

	class Noelem : public std::exception
	{
	public:
		Noelem();
		~Noelem() throw();
		const char *what(void) const throw();
		Noelem(Noelem const &src);
		Noelem &operator=(Noelem const &src);
	};
	class Arrfull : public std::exception
	{
	public:
		Arrfull();
		~Arrfull() throw();
		const char *what(void) const throw();
		Arrfull(Arrfull const &src);
		Arrfull &operator=(Arrfull const &src);
	};
	~Span();
};
