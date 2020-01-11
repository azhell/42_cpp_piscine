/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.Class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:58:12 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/10/05 10:58:15 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameController.Class.hpp"

GameController::GameController(int init_hp) : Player(init_hp)
{
	this->_dmgGive = 1;
	this->_n = 20;
	this->asteroidNum = 3;
	bossBulletsNum = 0;
	bossBullets = NULL;
	back = new Backgrd[_n];
	asteroid = new Asteroid[asteroidNum];
	bullets = NULL;
	bulletsNum = 0;
	god = false;
	bossNum = 0;
	_score = 0;
	_level = 0;
	enemyNum = 0;
	boss = NULL;
	enemy = NULL;
	return;
}

GameController::~GameController()
{
	delete[] bossBullets;
	delete[] asteroid;
	delete[] enemy;
	delete[] boss;
	delete[] back;
	delete[] bullets;
	return;
}

GameController &GameController ::operator=(GameController const &fix)
{
	if (this != &fix)
	{
		_hp = fix._hp;
		_n = fix._n;
		_maxRowX = fix._maxRowX;
		_maxRowY = fix._maxRowY;
		_score = fix._score;
		asteroidNum = fix.asteroidNum;
		bossBulletsNum = fix.bossBulletsNum;
		bulletsNum = fix.bulletsNum;
		enemyNum = fix.enemyNum;
		bossNum = fix.bossNum;
		_level = fix._level;
		back = fix.back;
		bullets = fix.bullets;
		bossBullets = fix.bossBullets;
		enemy = fix.enemy;
		boss = fix.boss;
		asteroid = fix.asteroid;
	}
	return (*this);
}

GameController::GameController(const GameController &vic) : Player(vic)
{
	*this = vic;
}

void GameController::printPlayer(WINDOW *win)
{
	wattron(win, COLOR_PAIR(2));
	wmove(win, this->getPosy(), this->getPosx());
	waddch(win, ACS_UARROW | A_UNDERLINE);
	wattroff(win, COLOR_PAIR(2));
}

void GameController::printPlayerDel(WINDOW *win)
{
	wmove(win, this->getPosy(), this->getPosx());
	waddch(win, ' ');
}

void GameController::setMaxRow(WINDOW *win)
{
	this->_maxRowX = getmaxx(win);
	this->_maxRowY = getmaxy(win);
	this->setPosx(this->_maxRowX / 2);
	this->setPosy(this->_maxRowY - 2);
}

void GameController::move(bool bs)
{
	if (bs)
	{
		if (Player::_posx > 1)
			Player::movePlayerLeft();
	}
	else
	{
		if (Player::_posx < (this->_maxRowX - 2))
			Player::moveplayerRight();
	}
}

void GameController::createBullet(int playerXpos, int playerYpos)
{
	if (bullets == NULL)
	{
		bullets = new Bullet[1];
		bullets[0].setPos(playerXpos, playerYpos);
		bulletsNum++;
	}
	else
	{
		Bullet *tempBullets = new Bullet[++bulletsNum];
		for (int i = 0; i < bulletsNum - 1; i++)
		{
			tempBullets[i].setPos(this->bullets[i].getX(), this->bullets[i].getY());
		}
		tempBullets[bulletsNum - 1].setPos(playerXpos, playerYpos);
		delete[] this->bullets;
		this->bullets = tempBullets;
	}
}

void GameController::genEnemy()
{
	int i = 0;
	int x, y = 0;

	if (enemy != NULL)
		delete[] enemy;
	enemyNum = 5 + (_level * 2);
	enemy = new Enemy[enemyNum];
	srand(time(0));
	while (i < enemyNum)
	{
		x = rand() % this->_maxRowX;
		y = rand() % (int)(this->_maxRowY * 0.5f);
		if (x < 2)
			x += 2;
		if (y < 2)
			y += 4;
		if (x > this->_maxRowX - 2)
			x -= 2;
		if (y > this->_maxRowY - 2)
			y -= 4;
		this->enemy[i].setPos(x, y);
		this->enemy[i].setHp(1);
		this->enemy[i].setLength(1);
		i++;
	}
}

void GameController::genBoss()
{
	int i = 0;
	int x, y = 0;

	if (boss != NULL)
		delete[] boss;
	bossNum = 2 + this->_level;
	boss = new Enemy[bossNum];
	srand(time(0));
	while (i < bossNum)
	{
		x = rand() % this->_maxRowX;
		y = rand() % (int)(this->_maxRowY * 0.5f);
		if (x < 2)
			x += 2;
		if (y < 2)
			y += 4;
		if (x > this->_maxRowX - 5)
			x -= 2;
		if (y > this->_maxRowY - 5)
			y -= 6;
		this->boss[i].setPos(x, y);
		this->boss[i].setHp(10);
		this->boss[i].setLength(3);
		i++;
	}
}

void GameController::genBack()
{
	int i = 0;
	int x, y = 0;

	srand(time(0));
	while (i < this->_n)
	{
		x = rand() % this->_maxRowX;
		y = rand() % this->_maxRowY;
		if (x <= 2)
			x += 2;
		if (y <= 2)
			y += 4;
		if (x > this->_maxRowX - 2)
			x -= 2;
		if (y > this->_maxRowY - 2)
			y -= 4;
		this->back[i].setPos(x, y);
		i++;
	}
}

void GameController::genAsteroid()
{
	int i = 0;
	int x, y = 0;

	srand(time(0));
	while (i < this->asteroidNum)
	{
		x = rand() % this->_maxRowX;
		y = rand() % (int)(this->_maxRowY * 0.6f);
		if (x <= 2)
			x += 2;
		if (y <= 2)
			y += 4;
		if (x > this->_maxRowX - 5)
			x -= 5;
		if (y > this->_maxRowY - 5)
			y -= 5;
		this->asteroid[i].setPos(x, y);
		i++;
	}
}

void GameController::bossMakeShots()
{
	if (bossBullets == NULL)
	{
		if (boss == NULL)
			return;
		if (!boss[0].getIsLife())
			return;
		bossBulletsNum = bossNum;
		bossBullets = new Bullet[bossBulletsNum];
		for (int i = 0; i < bossBulletsNum; i++)
			bossBullets[i].setPos(boss[i].getX(), boss[i].getY());
	}
	else
	{
		int numOfLifeBoss = 0;
		for (int i = 0; i < bossNum; i++)
			if (boss[i].getIsLife())
				numOfLifeBoss++;
		if (numOfLifeBoss == 0)
			return;
		bossBulletsNum += numOfLifeBoss;
		Bullet *tempBullets = new Bullet[bossBulletsNum];
		for (int i = 0; i < bossBulletsNum - numOfLifeBoss; i++)
		{
			tempBullets[i].setPos(this->bossBullets[i].getX(), this->bossBullets[i].getY());
		}
		for (int i = 0; i < bossNum; i++)
			if (boss[i].getIsLife())
				tempBullets[bossBulletsNum + --numOfLifeBoss - this->_level - 2].setPos(boss[i].getX(), boss[i].getY());
		delete[] this->bossBullets;
		this->bossBullets = tempBullets;
	}
}

void GameController::moveEnemy()
{
	for (int i = 0; i < enemyNum; i++)
	{
		this->enemy[i].move(1, this->_maxRowX);
	}
	for (int i = 0; i < bossNum; i++)
	{
		this->boss[i].move(1, this->_maxRowX);
	}
}

void GameController::moveBack()
{
	int i = 0;
	while (i < 20)
	{
		this->back[i].move(this->_maxRowY - 1);
		i++;
	}
}

void GameController::moveAsteroid()
{
	int i = 0;
	while (i < asteroidNum)
	{
		this->asteroid[i].move(this->_maxRowY - 1);
		i++;
	}
}

void GameController::moveBullets()
{
	for (int i = 0; i < bulletsNum; i++)
	{
		this->bullets[i].move(true);
	}
	checkBulletsToDestination();
}

void GameController::moveBossBullets()
{
	for (int i = 0; i < bossBulletsNum; i++)
	{
		this->bossBullets[i].move(false);
	}
}

bool GameController::checkCollition()
{
	static clock_t after;
	static clock_t before = clock();
	after = clock();
	if ((after - before) >= 15000)
	{
		this->setGood(false);
		bool noHp = false;
		for (int i = 0; i < bossBulletsNum; i++)
		{
			if ((bossBullets[i].getY() == _posy && bossBullets[i].getX() == _posx) || (bossBullets[i].getY() >= this->_maxRowY - 1))
			{
				if (!(bossBullets[i].getY() >= this->_maxRowY - 1))
				{
					if (this->getHp() == 1)
					{
						noHp = true;
					}
					else
					{
						this->setGood(true);
						before = clock();
						this->setHp(this->getHp() - 1);
					}
				}
				Bullet *tempBullets = new Bullet[bossBulletsNum - 1];
				int wasDel = 0;
				for (int j = 0; j < bossBulletsNum; j++)
				{
					if (j == i)
						wasDel = 1;
					else
						tempBullets[j - wasDel].setPos(this->bossBullets[j].getX(), this->bossBullets[j].getY());
				}
				this->bossBulletsNum--;
				delete[] this->bossBullets;
				this->bossBullets = tempBullets;
				i--;
			}
		}
		for (int i = 0; i < enemyNum; i++)
			if (enemy[i].getIsLife() && enemy[i].getX() == _posx &&
				enemy[i].getY() == _posy)
			{
				_hp = 0;
				return true;
			}
		for (int i = 0; i < bossNum; i++)
			if (boss[i].getIsLife() && (boss[i].getX() <= _posx && boss[i].getX() + boss[i].getLength() > _posx) && boss[i].getY() == _posy)
			{
				_hp = 0;
				return true;
			}
		for (int i = 0; i < asteroidNum; i++)
			if ((asteroid[i].getX() <= _posx && asteroid[i].getX() + asteroid[i].getLength() > _posx) && (asteroid[i].getY() <= _posy && asteroid[i].getY() + asteroid[i].getLength() > _posy))
				if (!((asteroid[i].getX() == _posx && asteroid[i].getY() == _posy) &&
					  (asteroid[i].getX() + asteroid[i].getLength() - 1 == _posx && asteroid[i].getY() == _posy) &&
					  (asteroid[i].getX() == _posx && asteroid[i].getY() + asteroid[i].getLength() - 1 == _posy) &&
					  (asteroid[i].getX() + asteroid[i].getLength() - 1 == _posx && asteroid[i].getY() + asteroid[i].getLength() - 1 == _posy)))
				{
					if (this->getHp() == 1)
					{
						return true;
					}
					else
					{
						this->setGood(true);
						before = clock();
						this->setHp(this->getHp() - 1);
						break;
					}
				}
		if (noHp == true)
			return true;
	}
	return false;
}

void GameController::checkBulletsToDestination()
{
	for (int i = 0; i < bulletsNum; i++)
	{
		if (bullets[i].getY() == 1 || checkShotEnemy(i))
		{
			Bullet *tempBullets = new Bullet[bulletsNum - 1];
			int wasDel = 0;
			for (int j = 0; j < bulletsNum; j++)
			{
				if (j == i)
					wasDel = 1;
				else
					tempBullets[j - wasDel].setPos(this->bullets[j].getX(), this->bullets[j].getY());
			}
			this->bulletsNum--;
			delete[] this->bullets;
			this->bullets = tempBullets;
			i--;
		}
	}
}

bool GameController::checkShotEnemy(int index)
{
	bool isShot = false;
	bool enimiesDied = false;
	bool bossDied = false;
	for (int i = 0; i < this->enemyNum; i++)
	{
		if ((this->bullets[index].getX() >= this->enemy[i].getX() &&
			 this->bullets[index].getX() < this->enemy[i].getX() + this->enemy[i].getLength()) &&
			(this->bullets[index].getY() == this->enemy[i].getY() ||
			 (this->bullets[index].getY() + 1) == this->enemy[i].getY()))
		{
			if (enemy[i].getIsLife())
			{
				isShot = true;
				this->_score++;
				enemy[i].makeShot(this->_dmgGive);
				if (checkIfEnemiesDied())
					enimiesDied = true;
			}
		}
	}
	for (int i = 0; i < this->bossNum; i++)
	{
		if ((this->bullets[index].getX() >= this->boss[i].getX() &&
			 this->bullets[index].getX() < this->boss[i].getX() + this->boss[i].getLength()) &&
			(this->bullets[index].getY() == this->boss[i].getY()))
		{
			if (boss[i].getIsLife())
			{
				isShot = true;
				boss[i].makeShot(this->_dmgGive);
				if (checkIfBossDied())
					bossDied = true;
			}
		}
	}
	if (enimiesDied == true)
	{
		genBoss();
	}
	if (bossDied == true)
	{
		genEnemy();
		delete[] bossBullets;
		bossBullets = NULL;
		bossBulletsNum = 0;
	}
	return (isShot);
}

bool GameController::checkIfEnemiesDied()
{
	for (int i = 0; i < enemyNum; i++)
	{
		if (enemy[i].getIsLife() == true)
			return false;
	}
	return true;
}

bool GameController::checkIfBossDied()
{
	for (int i = 0; i < bossNum; i++)
	{
		if (boss[i].getIsLife() == true)
			return false;
	}
	this->_level++;
	this->_score *= 2;
	return true;
}

int GameController::getBulletsNum() const
{
	return this->bulletsNum;
}

bool GameController::getGood() const
{
	return (this->god);
}

void GameController::setGood(bool b)
{
	this->god = b;
}