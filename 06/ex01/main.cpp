/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:14:27 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/10 15:14:29 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Serialize.hpp"

void	random(Data *data)
{
	int rand;
	static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	data->s1 = "00000000";
	data->s2 = "00000000";
	srand(time(0));
	rand = std::rand() % 3000;
	if (rand % 2 != 0)
		rand = -rand;
	data->n = rand;
	for (size_t i = 0; i < 8; i++)
	{
		data->s1[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	}
	srand(time(0));
	data->n = rand;
	for (size_t i = 0; i < 8; i++)
	{
		data->s2[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	}
	std::cout << data->s1 << " " << data->n << " " + data->s2 << std::endl;

}

int main()
{
	Serialize ser;
	void *raw;

	raw = ser.serialize();
	Data *data = ser.deserialize(raw);
	std::cout << data->s1 << " " << data->n << " " + data->s2 << std::endl;
	return (0);
}