#include "Enemy.h"
#include "../dxlib_ext/dxlib_ext.h"

Enemy enemy;

std::vector<Enemy> enemyList;

void Enemy::update(float delta_time) {
	for (auto&& bullet : enemyList) {
		bullet.pos_.y += MOVE_SPEED;
	}
}

void Enemy::draw() {
	for (auto&& bullet : enemyList) {
		DrawBoxEx(bullet.pos_, 100, 30, false);
	}
}

void Enemy::Instance() {
	// �V�����G�̃C���X�^���X�𐶐����A�ʒu��ݒ肷��
	Enemy newEnemy;
	newEnemy.pos_.x = GetRand(DXE_WINDOW_WIDTH);

	// ���������G��G���X�g�ɒǉ�����
	enemyList.push_back(newEnemy);
}
