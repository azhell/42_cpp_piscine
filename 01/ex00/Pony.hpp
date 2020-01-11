/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:11:00 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 11:11:01 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
public:
	Pony();
	~Pony();
	void setColor(std::string);
	void setName(std::string);
	void setAge(std::string);
	void setSecret(std::string);
	std::string getColor(void);
	std::string getName(void);
	std::string getAge(void);
	std::string getSecret(void);

private:
	std::string _color;
	std::string _name;
	std::string _age;
	std::string _secret;
};

#endif