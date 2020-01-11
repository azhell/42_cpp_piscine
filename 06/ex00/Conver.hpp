/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conver.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:38:27 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 11:38:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Conver
{
public:
	Conver();
	Conver(Conver const &src);
	~Conver();

	Conver &operator=(Conver const &src);

	void toChar(char *input);
	void toInt(char *input);
	void toFloat(char *input);
	void toDouble(char *input);

	class Impossible : public std::exception
	{
	public:
		Impossible();
		Impossible(Impossible const &src);
		~Impossible() throw();

		Impossible &operator=(Impossible const &src);

		const char *what(void) const throw();
	};

	class NotPrintable : public std::exception
	{
	public:
		NotPrintable();
		NotPrintable(NotPrintable const &src);
		~NotPrintable() throw();

		NotPrintable &operator=(NotPrintable const &src);

		const char *what() const throw();
	};
};