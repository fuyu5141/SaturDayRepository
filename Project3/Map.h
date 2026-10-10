#pragma once
#include<vector>
#include<string>
using namespace std;


class Map
{
private:
	//マップチップの番号
	vector<vector<int>> mapData;

    //当たり判定の情報
	vector<vector<int>> hitData;

	//マップチップ画像
	int chipImage;

	//マップの縦横のマスの数
	int mapWidth;
	int mapHeight;

	//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csyファイルの読み込み
	bool LoadCSV(const char* fileName,vector<vector<int>>& data);

public:
	Map();
	bool Init();
	//マップの描画
	void Draw(float cameraX, float cameraY);
	//指定したマスが通行できるか調べる
	bool IsSolid(int tileX, int tileY);

	bool IsSolidAt(float worldX, float worldY);


};

