#pragma once

//HitCollider�́A�����蔻����s���I�u�W�F�N�g�̃N���X�ł��B
class  HitCollider {
public:
	float time_ = 0;
	void update(float delta_time);
	void draw();
	void setup();
	void hit_player_enemy();
};