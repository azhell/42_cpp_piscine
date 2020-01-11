/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 18:43:14 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 18:43:16 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{

public:
	Weapon(std::string);
	~Weapon();
	const std::string &getType(void);
	void setType(std::string);

private:
	std::string _type;
};

#endif