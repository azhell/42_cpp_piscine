/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:42:28 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:42:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{
private:
	std::string _name;
	int _damage;
	int _apCost;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	~AWeapon();
	AWeapon(AWeapon const &);
	AWeapon &operator=(AWeapon const &fix);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif