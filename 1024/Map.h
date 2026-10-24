#pragma once
#include"Config.h"
#include<vector>
using namespace std;
class Map
{
private:

	/// <summary>
	/// ロードマップ
	/// </summary>
	/// <param name="folePath">マップCSVファイルパス</param>
	/// <param name="mapData">マップチップイメージ</param>
	/// <returns>描画判定</returns>

	bool LaodMap(const char* folePath, vector< vector<int>>& mapData);

	/// <summary>
	/// 描画レイヤー
	/// </summary>
	/// <param name="mapData">マップチップイメージ</param>

	void DrawLayer(const vector<vector<int>>& mapData) const;

	/// <summary>
	///　描画フラグ
	/// </summary>
	/// <param name="mapX">X座標</param>
	/// <param name="mapY">Y座標</param>
	/// <returns>描画フラグ</returns>
	bool IsValidMapPosition(int mapX, int mapY);

	int chipImages[Config::MAP_CHIP_IMAGE_COUNT];


	vector<vector<int>> backMap;
	vector<vector<int>> baseMap;
	vector<vector<int>> nearMap;

	int mapXNum;
	int mapYNum;

	bool isInitialized;


public:
	Map();
	~Map();

	/// <summary>
	/// 画像読み込み初期化
	/// </summary>
	/// <returns></returns>

	bool Init();

	//mapを奥から手前の順に描画

	/// <summary>
	/// 描画
	/// </summary>

	void Draw() const;

	//DxLib終了前に呼び出して画像などを解放
	void Finalize();

};

