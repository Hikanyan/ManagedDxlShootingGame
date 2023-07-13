#pragma once
#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"

class Bullet {
public:
	static constexpr int MOVE_SPEED = 5;
	static constexpr int SIZE_WIDTH = 5;
	static constexpr int SIZE_HEIGHT = 5;

	tnl::Vector3 pos_ = { 0,0,0};
	void update(float delta_time);
	void draw();
	void Instance(Player& player);

};

extern std::vector<Bullet*> bulletList;

extern Bullet bullet;