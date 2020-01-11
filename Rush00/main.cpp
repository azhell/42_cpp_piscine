/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:51:13 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:51:14 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include "GameController.Class.hpp"

int	game(void);

int main(void)
{
	initscr();
	game();
	endwin();
	system("leaks -q ft_retro");
	return (0);
}