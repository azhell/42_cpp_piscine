/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:34:33 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 17:34:35 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Brain.hpp"

class Human
{
public:
	Brain const br;
	std::string identify(void) const;
	Brain getBrain(void);
	Human(/* args */);
	~Human();
};

#endif
