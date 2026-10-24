#include "Map.h"
#include"DxLib.h"

#include<fstream>
#include<sstream>
#include<string>

Map::Map() :
	mapXNum(0), mapYNum(0), isInitialized(false)
{
	for (int i = 0; i < Config::MAP_CHIP_IMAGE_COUNT; i++)
	{
		chipImages[i] = -1;

	}
}


Map::~Map()
{
	Finalize();

	//画像チップ単位に分割して読み込み
	if (LoadDivGraph(Config::MAP_CHIP_IMAGE_PATH,
		Config::MAP_CHIP_IMAGE_COUN,
		Config::MAP_CHIP_IMAGE_COLUMNS.
		Config::MAP_CHIP_IMAGE_ROWS.
		Config::MAP_CHIP_SIZE, Config::MAP_CHIP_SIZE.chipImages) == -1)
	{
		Finalize();
		return false;
	}

	if (!LaodMap(co))



}

//初期化
//マップの読み込み
//描画レイヤー
//描画フラグ
//終了処理