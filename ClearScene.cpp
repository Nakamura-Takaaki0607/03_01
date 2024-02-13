#include "ClearScene.h"
#include "Novice.h"

void ClearScene::Init()
{

}

void ClearScene::Update()
{
	if (keys_[DIK_RETURN] && !preKeys_[DIK_RETURN]) {
		sceneNo = kTitle;
	}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(600, 350, "ClearScene");
	Novice::ScreenPrintf(590, 370, "Tap to ENTER");
}