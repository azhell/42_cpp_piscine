/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:34 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:36 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const&);
	SuperMutant &operator=(SuperMutant const &fix);
	void takeDamage(int);
};

#endif