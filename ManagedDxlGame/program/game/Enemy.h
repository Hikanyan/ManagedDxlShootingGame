#pragma once

#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"

class Enemy {
public:
	int hp_ = 1;
	tnl::Vector3 pos_ = { DXE_WINDOW_WIDTH / 2,DXE_WINDOW_HEIGHT * 0.2,0 };

	static constexpr int SIZE_WIDTH = 50;
	static constexpr int SIZE_HEIGHT = 50;
	static constexpr int MOVE_SPEED = 5;

	void update(float delta_time);
	void draw();
	void Instance();
};

extern std::vector<Enemy> enemyList;
extern Enemy enemy;