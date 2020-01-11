/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 20:02:05 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/03 20:02:06 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	/* data */
public:
	SuperTrap(std::string name);
	~SuperTrap();
	void meleeAttack(std::string const &target);
	void rangeAttack(std::string const &target);
	SuperTrap &operator=(SuperTrap const &fix);
	SuperTrap(SuperTrap const&);


};



#endif