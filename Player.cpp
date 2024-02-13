#include "Player.h"

#include "Novice.h"

Player::Player(char* keys, char* preKeys)
{
	pos_ = { 1280 / 2, 500 };
	size_ = 50;
	speed_ = 5;
	keys_ = keys;
	preKeys_ = preKeys;
}

Player::~Player()
{
	for (Bullet* bullet : bullets_)
	{
		delete bullet;
	}
}

void Player::Update()
{
	if (keys_[DIK_UP] && pos_.y >= size_) {
		pos_.y -= speed_;
	}

	if (keys_[DIK_DOWN] && pos_.y <= 720 - size_) {
		pos_.y += speed_;
	}

	if (keys_[DIK_LEFT] && pos_.x >= size_) {
		pos_.x -= speed_;
	}

	if (keys_[DIK_RIGHT] && pos_.x <= 1280 - size_) {
		pos_.x += speed_;
	}

	if (keys_[DIK_SPACE] && !preKeys_[DIK_SPACE]) {
		Bullet* newBullet = new Bullet(pos_);
		bullets_.push_back(newBullet);
	}
	for (Bullet* bullet : bullets_) {
		bullet->Update();
	}
	bullets_.remove_if([](Bullet* bullet) {
		if (bullet->IsDead()) {
			delete bullet;
			return true;
		}
		return false;
		});
}

void Player::Draw() {
	Novice::DrawBox(pos_.x, pos_.y, size_, size_, 0.0f, BLUE, kFillModeSolid);
	for (Bullet* bullet : bullets_) {
		bullet->Draw();
	}
}