/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:11 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:05:13 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;

public:
	std::string getName() const;
	std::string getTitle() const;
	Sorcerer(std::string, std::string);
	Sorcerer &operator=(Sorcerer const &fix);
	~Sorcerer();
	Sorcerer(const Sorcerer&);
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &i);

#endif