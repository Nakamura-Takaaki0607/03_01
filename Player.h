#pragma once

#include "Vector2.h"
#include "Bullet.h"

#include <memory>
#include <list>

class Bullet;

class Player
{
public:
	Player(char* keys, char* preKeys);
	~Player();

	void Update();
	void Draw();

	const std::list<Bullet*>& Getbullets()const { return bullets_; }

private:
	Vector2 pos_;
	float size_;
	float speed_;

	std::list<Bullet*> bullets_;

	char* keys_;
	char* preKeys_;
};