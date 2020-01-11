/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:12:56 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 18:12:58 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include "GameController.Class.hpp"
#include <ctime>
#include <unistd.h>

int event(GameController *game, WINDOW *win)
{
	int ch = 0;
	int flag = 0;
	ch = wgetch(win);
	switch (ch)
	{
	case 27:
	{
		return (0);
		break;
	}
	case KEY_LEFT:
	{
		game->printPlayerDel(win);
		game->move(true);
		break;
	}
	case KEY_RIGHT:
	{
		game->printPlayerDel(win);
		game->move(false);
		break;
	}
	case ' ':
	{
		if (game->getBulletsNum() < 7)
		{
			game->createBullet(game->getPosx(), game->getPosy() - 1);
			flag = 1;
		}
		break;
	}
	case KEY_RESIZE:
	{
		return (0);
		wclear(win);
		game->setMaxRow(win);
		game->genBack();
		box(win, 0, 0);
		break;
	}
	default:
		break;
	}
	return (1);
}

int game()
{
	int i = 0;
	int exit = 1;
	clock_t after;
	clock_t before;
	int row = getmaxx(stdscr);
	int col = getmaxy(stdscr);
	GameController game(5);
	WINDOW *win = newwin(col, row, 0, 0);
	if (stdscr == 0)
	{
		std::cout << "Fail init ncurses." << std::endl;
	}
	else
	{
		nodelay(win, true);
		keypad(win, true);
		raw();
		curs_set(0);
		game.setMaxRow(win);
		box(win, 0, 0);
		game.genBack();
		game.genEnemy();
		game.genAsteroid();
		start_color();
		init_pair(1, COLOR_RED, COLOR_BLACK);
		init_pair(2, COLOR_GREEN, COLOR_BLACK);
		init_pair(3, COLOR_YELLOW, COLOR_BLACK);
		init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
		unsigned long duration = (double)CLOCKS_PER_SEC / 20;

		int skip = 4;

		while (exit)
		{
			box(win, 0, 0);
			before = clock();
			game.printBack(win);
			game.printEnemy(win);
			game.printBullet(win);

			if (game.getGood())
			{
				if (i % 10 == 0 || i % 10 == 1 || i % 10 == 2 || i % 10 == 3 || i % 10 == 4)
				{
					game.printPlayerDel(win);
				}
				else
				{
					game.printPlayer(win);
				}
				if (i > 20000)
					i = 0;
			}
			else
			{
				game.printPlayer(win);
			}
			game.printBoss(win);
			game.printAsteroid(win);
			game.printLevel(win);
			game.printScore(win);
			game.printBossBullets(win);
			game.printLives(win);
			exit = event(&game, win);
			if (exit == 0)
				break;
			game.delBack(win);
			game.moveBack();
			game.printEnemyDel(win);
			game.printBossDel(win);
			game.moveEnemy();
			game.printBulletDel(win);
			game.printBossBulletsDel(win);
			game.moveBullets();
			game.printBossBulletsDel(win);
			game.printAsteroidDel(win);
			if (skip % 4 == 0)
			{
				game.moveAsteroid();
				game.moveBossBullets();
			}
			if (game.checkCollition())
			{
				nodelay(win, false);
				wclear(win);
				wmove(win, getmaxx(win) / 2, getmaxy(win) / 2);
				wprintw(win, "Game Over !");
				wrefresh(win);
				wgetch(win);
				break;
			}
			if (skip == 12)
				game.bossMakeShots();
			after = clock();
			if (after - before < duration)
			{
				usleep(duration - after + before);
			}
			if (skip == 12)
				skip = -1;
			skip++;
			i++;
			wrefresh(win);
		}
	}
	return (0);
}