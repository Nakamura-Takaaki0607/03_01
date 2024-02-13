#pragma once

#include "IScene.h"

#include <memory>

#include "Player.h"
#include "Enemy.h"

class Player;

class Enemy;

class StageScene : public IScene
{
public:
	void Init() override;
	void Update() override;
	void Draw() override;
	void ChackAllCollisions();

private:
	std::unique_ptr<Player> player;
	std::unique_ptr<Enemy> enemy;
};