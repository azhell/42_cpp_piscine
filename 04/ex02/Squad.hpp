/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 21:50:48 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 21:50:49 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int _maxCount;
	int	_count;
	ISpaceMarine *_marine[16];
public:
	Squad();
	Squad(Squad const &);
	Squad &operator=(Squad const &fix);
	~Squad();

	int getCount() const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine *unit);
};
