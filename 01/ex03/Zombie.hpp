/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:32:41 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:32:43 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <ctime>

class Zombie
{
public:
	Zombie();
	~Zombie();
	std::string getName(void);
	std::string getType(void);
	std::string randName();

private:
	std::string _name;
	std::string _type;
};

#endif