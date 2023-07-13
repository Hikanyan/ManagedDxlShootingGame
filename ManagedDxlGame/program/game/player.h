#pragma once
#include "../dxlib_ext/dxlib_ext.h"

class Player {
public:
	int hp_ = 10;
	static constexpr int MOVE_SPEED = 5;
	static constexpr int SIZE_WIDTH = 5;
	static constexpr int SIZE_HEIGHT = 5;

	tnl::Vector3 pos_ = { DXE_WINDOW_WIDTH / 2,DXE_WINDOW_HEIGHT * 0.8,0 };
	void update(float delta_time);
	void draw();
};



extern Player player;