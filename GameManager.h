#pragma once

#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include "Novice.h"
#include "Input.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();

private:
	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_;

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};