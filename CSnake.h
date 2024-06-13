#pragma once
#include"Game.h"
class CScene;
class CSnake
{
private:
	vector<pair<int, int>> body;
	int dir;
	int y, x;
    int lastInput;
	int currentMapW;
public:
	CSnake();
    CSnake(int yy,int xx);
	~CSnake();
	void Update(class CScene * Scene,int input);
	void GoSnake(class CScene * Scene);
};