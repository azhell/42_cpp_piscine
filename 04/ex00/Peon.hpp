/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:05:58 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 12:06:00 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	/* data */
public:
	void getPolymorphed(void) const;
	Peon &operator=(Peon const &fix);
	Peon(const Peon&);
	Peon(std::string);
	~Peon();
};

#endif
