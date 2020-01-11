/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.Class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:58:17 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:58:19 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "ctime"
#include "Player.Class.hpp"
#include "Backgrd.Class.hpp"
#include "Bullet.Class.hpp"
#include "ncurses.h"
#include "Enemy.Class.hpp"
#include "Asteroid.class.hpp"

class GameController : public Player
{
  private:
	int _maxRowX;
	int _n;
	bool god;
	int _maxRowY;
	int _score;
	Backgrd *back;
	Bullet *bullets;
	Bullet *bossBullets;
	Enemy *enemy;
	Enemy *boss;
	Asteroid *asteroid;
	int asteroidNum;
	int bossBulletsNum;
	int bulletsNum;
	int enemyNum;
	int bossNum;
	int _level;

	void checkBulletsToDestination();
	bool checkShotEnemy(int index);
	bool checkIfEnemiesDied();
	bool checkIfBossDied();

  public:
	Player *player;
	GameController(int);
	GameController &operator=(GameController const &fix);
	GameController(GameController const &);
	~GameController();
	void createBullet(int playerXpos, int playerYpos);
	void setMaxRow(WINDOW *win);
	void printPlayer(WINDOW *win);
	void printPlayerDel(WINDOW *win);
	void printBack(WINDOW *win);
	void delBack(WINDOW *win);
	void printEnemy(WINDOW *win);
	void printEnemyDel(WINDOW *win);
	void printBullet(WINDOW *win);
	void printBulletDel(WINDOW *win);
	void printBoss(WINDOW *win);
	void printBossDel(WINDOW *win);
	void printAsteroid(WINDOW *win);
	void printAsteroidDel(WINDOW *win);
	void printLevel(WINDOW *win);
	void printScore(WINDOW *win);
	void printLives(WINDOW *win);
	void backgroundControl(WINDOW *win);
	void printBossBullets(WINDOW *win);
	void printBossBulletsDel(WINDOW *win);
	void move(bool);
	void moveBack();
	void moveEnemy();
	void moveBullets();
	void moveBossBullets();
	void moveBoss();
	void moveAsteroid();
	void genBack();
	void genEnemy();
	void genBoss();
	void genAsteroid();
	void bossMakeShots();
	bool getGood() const;
	void setGood(bool);

	bool checkCollition();
	int getBulletsNum() const;
};