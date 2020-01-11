/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:34:20 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/01 17:34:21 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <sstream>
#include <string>

class Brain
{
private:
	std::string _memory;

public:
	std::string identify(void) const;
	Brain();
	~Brain();
};

#endif
