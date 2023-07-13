#pragma once

//HitColliderは、当たり判定を行うオブジェクトのクラスです。
class  HitCollider {
public:
	float time_ = 0;
	void update(float delta_time);
	void draw();
	void setup();
	void hit_player_enemy();
};