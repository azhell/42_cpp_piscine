/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 18:44:17 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 18:44:19 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp" 

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif