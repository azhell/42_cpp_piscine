/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.Class.print.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 14:52:45 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/06 14:52:46 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameController.Class.hpp"
#include <cstdlib>

void GameController::printBack(WINDOW *win)
{
	int i = 0;
	wattron(win, COLOR_PAIR(3));
	while (i < this->_n)
	{
		if (this->back[i].getY() < getmaxy(win) &&
			this->back[i].getX() < getmaxx(win))
		{
			wmove(win, this->back[i].getY(), this->back[i].getX());
			waddch(win, '.');
		}
		i++;
	}
	wattroff(win, COLOR_PAIR(2));
}

void GameController::printBullet(WINDOW *win)
{
	for (int i = 0; i < bulletsNum; i++)
	{
		if (this->bullets[i].getY() < getmaxy(win) &&
			this->bullets[i].getX() < getmaxx(win))
		{
			wmove(win, this->bullets[i].getY(), this->bullets[i].getX());
			waddch(win, '|');
		}
	}
}

void GameController::printBoss(WINDOW *win)
{
	wattron(win, COLOR_PAIR(4));
	for (int i = 0; i < bossNum; i++)
	{
		if (boss[i].getIsLife() == true)
		{
			if (this->boss[i].getY() < getmaxy(win) &&
				this->boss[i].getX() < getmaxx(win) - this->boss[i].getLength())
			{
				for (int j = 0; j < this->boss[i].getLength(); j++)
				{
					wmove(win, this->boss[i].getY(), this->boss[i].getX() + j);
					waddch(win, ACS_CKBOARD);
				}
			}
		}
	}
	wattroff(win, COLOR_PAIR(4));
}

void GameController::printBossBullets(WINDOW *win)
{
	if (bossBullets != 0)
		wattron(win, COLOR_PAIR(1));
	for (int i = 0; i < bossBulletsNum; i++)
	{
		if (this->bossBullets[i].getY() < getmaxy(win) &&
			this->bossBullets[i].getX() < getmaxx(win))
		{
			wmove(win, this->bossBullets[i].getY(), this->bossBullets[i].getX());
			waddch(win, '|');
		}
	}
	wattroff(win, COLOR_PAIR(1));
}

void GameController::printEnemy(WINDOW *win)
{
	wattron(win, COLOR_PAIR(1));
	for (int i = 0; i < enemyNum; i++)
	{
		if (enemy[i].getIsLife() == true)
		{
			if (this->enemy[i].getY() < getmaxy(win) &&
				this->enemy[i].getX() < getmaxx(win))
			{
				wmove(win, this->enemy[i].getY(), this->enemy[i].getX());
				waddch(win, ACS_DIAMOND);
			}
		}
	}
	wattroff(win, COLOR_PAIR(1));
}

void GameController::printAsteroid(WINDOW *win)
{
	wattron(win, COLOR_PAIR(2));
	for (int i = 0; i < asteroidNum; i++)
	{
		if (this->asteroid[i].getY() + this->asteroid[i].getLength() < getmaxy(win) &&
			this->asteroid[i].getX() + this->asteroid[i].getLength() < getmaxx(win))
		{
			for (int k = 0; k < this->asteroid[i].getLength(); k++)
			{
				for (int j = 0; j < this->asteroid[i].getLength(); j++)
				{
					if (!((k == 0 && j == 0) || (k == 0 && j == asteroid[i].getLength() - 1) || (k == asteroid[i].getLength() - 1 && j == 0) || (k == asteroid[i].getLength() - 1 && j == asteroid[i].getLength() - 1)))
					{
						wmove(win, this->asteroid[i].getY() + k, this->asteroid[i].getX() + j);
						waddch(win, ACS_PI);
					}
				}
			}
		}
	}
	wattroff(win, COLOR_PAIR(1));
}

void GameController::printAsteroidDel(WINDOW *win)
{
	for (int i = 0; i < asteroidNum; i++)
	{
		if (this->asteroid[i].getY() + this->asteroid[i].getLength() < getmaxy(win) &&
			this->asteroid[i].getX() + this->asteroid[i].getLength() < getmaxx(win))
		{
			for (int k = 0; k < this->asteroid[i].getLength(); k++)
			{
				for (int j = 0; j < this->asteroid[i].getLength(); j++)
				{
					wmove(win, this->asteroid[i].getY() + k, this->asteroid[i].getX() + j);
					waddch(win, ' ');
				}
			}
		}
	}
}

void GameController::printBossBulletsDel(WINDOW *win)
{
	if (bossBullets != 0)
		for (int i = 0; i < bossBulletsNum; i++)
		{
			if (this->bossBullets[i].getY() < getmaxy(win) &&
				this->bossBullets[i].getX() < getmaxx(win))
			{
				wmove(win, this->bossBullets[i].getY(), this->bossBullets[i].getX());
				waddch(win, ' ');
			}
		}
}

void GameController::delBack(WINDOW *win)
{
	int i = 0;

	while (i < this->_n)
	{
		if (this->back[i].getY() < getmaxy(win) &&
			this->back[i].getX() < getmaxx(win))
		{
			wmove(win, this->back[i].getY(), this->back[i].getX());
			waddch(win, ' ');
		}
		i++;
	}
}
void GameController::printBossDel(WINDOW *win)
{
	for (int i = 0; i < bossNum; i++)
	{
		if (this->boss[i].getY() < getmaxy(win) &&
			this->boss[i].getX() < getmaxx(win) - this->boss[i].getLength())
		{
			for (int j = 0; j < this->boss[i].getLength(); j++)
			{
				wmove(win, this->boss[i].getY(), this->boss[i].getX() + j);
				waddch(win, ' ');
			}
		}
	}
}

void GameController::printBulletDel(WINDOW *win)
{
	for (int i = 0; i < bulletsNum; i++)
	{
		if (this->bullets[i].getY() < getmaxy(win) &&
			this->bullets[i].getX() < getmaxx(win))
		{
			wmove(win, this->bullets[i].getY(), this->bullets[i].getX());
			waddch(win, ' ');
		}
	}
}

void GameController::printEnemyDel(WINDOW *win)
{
	for (int i = 0; i < enemyNum; i++)
	{
		if (this->enemy[i].getY() < getmaxy(win) &&
			this->enemy[i].getX() < getmaxx(win))
		{
			wmove(win, this->enemy[i].getY(), this->enemy[i].getX());
			waddch(win, ' ');
		}
	}
}

void GameController::printScore(WINDOW *win)
{
	std::string line = std::to_string(this->_score);
	char const *ch = line.c_str();
	wmove(win, 0, 10);
	wprintw(win, "SCORE:");
	wprintw(win, ch);
}

void GameController::printLevel(WINDOW *win)
{
	wmove(win, 0, 0);
	wprintw(win, "LEVEL:");
	std::string line = std::to_string(this->_level);
	char const *ch = line.c_str();
	wprintw(win, ch);
}

void GameController::printLives(WINDOW *win)
{
	wmove(win, 0, 20);
	std::string line = std::to_string(this->_hp);
	char const *ch = line.c_str();
	wprintw(win, "HP::");
	wprintw(win, ch);
	if (this->god == true)
		wprintw(win, "   GOD");
}