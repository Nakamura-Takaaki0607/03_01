#include "TitleScene.h"
#include "Novice.h"

void TitleScene::Init()
{

}

void TitleScene::Update()
{
	if (keys_[DIK_RETURN] && !preKeys_[DIK_RETURN]) {
		sceneNo = kStage;
	}
}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(600, 350, "TitleScene");
	Novice::ScreenPrintf(590, 370, "Tap to ENTER");
}