/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:14:51 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 15:14:52 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef struct Data
{
	std::string s1;
	int n;
	std::string s2;
} Data;

class Serialize
{
private:
	Serialize(const Serialize &fix);
	Serialize &operator=(Serialize const &fix);

public:
	Serialize();
	~Serialize();
	static void *serialize(void);
	static Data *deserialize(void *raw);
};
