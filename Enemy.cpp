#include "Enemy.h"
#include "Novice.h"

Enemy::Enemy()
{
	pos_ = { 1280 / 2, 100 };
	size_ = 50;
	speed_ = 3;
	isMove_ = 1;
	isDead_ = false;
}

void Enemy::Update()
{
	pos_.x += isMove_ * speed_;
	if (pos_.x <= size_ || pos_.x >= 1280 - size_) {
		isMove_ *= -1;
	}
}

void Enemy::Draw()
{
	Novice::DrawBox(pos_.x, pos_.y, size_, size_, 0.0f, RED, kFillModeSolid);
}