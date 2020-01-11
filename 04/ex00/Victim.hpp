/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:35 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:05:36 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
protected:
	std::string _name;

public:
	Victim(std::string);
	~Victim();
	Victim(const Victim&);
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
	void setName(std::string);
	Victim &operator=(Victim const &fix);
};

std::ostream &operator<<(std::ostream &o, Victim const &i);

#endif