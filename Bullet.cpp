#include "Bullet.h"
#include "Novice.h"
#include "StageScene.h"

Bullet::Bullet(Vector2 pos)
{
	pos_ = pos;
	size_ = 10;
	count_ = 600;
	speed_ = 50;
	isDead_ = false;
}

void Bullet::Update()
{
	pos_.y -= speed_;
	count_--;
	if (--count_ <= 0) {
		isDead_ = true;
	}
}

void Bullet::Draw()
{
	Novice::DrawTriangle(pos_.x, pos_.y - 10, pos_.x - 10, pos_.y + 10, pos_.x + 10, pos_.y + 10, WHITE, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "%d", count_);
}