/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:33:05 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:33:07 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_H
#define ZOMBIEVENT_H

#include "Zombie.hpp"
#include <ctime>

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void setName(std::string);
	std::string getName(void);
	std::string getType(void);
	void setZombieType(std::string str);
	Zombie *newZombie(std::string);
	void randChump(void);

private:
	std::string _name;
	std::string _type;
};

#endif