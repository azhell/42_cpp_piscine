/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:55 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:57 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const&);
	RadScorpion &operator=(RadScorpion const &fix);
	void takeDamage(int);
};

#endif