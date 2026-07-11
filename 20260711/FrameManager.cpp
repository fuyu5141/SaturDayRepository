#include "FrameManager.h"


//=====================================
//コンストラクタ
//=====================================

FrameManager::FrameManager()
{
	//フレームカウンターを初期化
	frameCounter = 0;

}

//=====================================
//更新
//=====================================

void FrameManager::Update()
{
	frameCounter++;
}

//========================================
//現在のフレーム取得
//========================================

int FrameManager::GetFrameCounter() const
{
	return frameCounter;
}

