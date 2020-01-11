/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:43:13 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/04 15:43:15 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Enemy_H
#define Enemy_H

#include "iostream"
#include "string"

class Enemy
{
private:
	int	_hp;
	std::string _type;

protected:
	void setHp(int);
public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy(Enemy const&);
	Enemy &operator=(Enemy const &fix);
	std::string getType() const;
	int getHp() const;
	virtual void takeDamage(int) = 0;
};


#endif