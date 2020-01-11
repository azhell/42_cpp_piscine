/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:14:47 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 15:14:48 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


void	random(Data *data);


Serialize::Serialize(/* args */)
{
	return ;
}

Serialize::~Serialize()
{
		return;
}

void *Serialize::serialize()
{
	Data *data = new Data;
	void *da;
	random(data);
	std::string s3 = "0000";
	da = static_cast<void*>(data);
	da = data;
	return (da);
}

Data *Serialize::deserialize(void *raw)
{
	Data *data;
	data = static_cast<Data*>(raw);
	return (data);
}