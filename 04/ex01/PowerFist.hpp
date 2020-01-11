/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:02 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:04 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const &);
	PowerFist &operator=(PowerFist const &fix);
	void attack() const;
};

#endif