#pragma once

#include "Vector2.h"

class Enemy
{
public:
	Enemy();
	void Update();
	void Draw();
	void OnCollision() { isDead_ = true; }
	bool GetDead() { return isDead_; }
	Vector2 GetPos() { return pos_; }
	float GetSize() { return size_; }

private:
	Vector2 pos_;
	float size_;
	float speed_;
	int isLeft_;
	bool isDead_;
};