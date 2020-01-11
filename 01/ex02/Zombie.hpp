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

class Zombie
{
public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void setName(std::string);
	void setType(std::string);
	void announce(void);
	std::string getName(void);
	std::string getType(void);

private:
	std::string _name;
	std::string _type;
};

#endif