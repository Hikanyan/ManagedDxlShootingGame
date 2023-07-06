#include "Enemy.h"
#include "../dxlib_ext/dxlib_ext.h"

Enemy enemy;

std::vector<Enemy*> enemyList;

void Enemy::update(float delta_time) {
    for (auto it = enemyList.begin(); it != enemyList.end(); ) {
        Enemy* enemy = *it;
        enemy->pos_.y += MOVE_SPEED;
        if (enemy->pos_.y >= DXE_WINDOW_HEIGHT*0.9) {
            // �G���폜���ă������������
            delete enemy;
            it = enemyList.erase(it);
        }
        else {
            ++it;
        }
    }
}

void Enemy::draw() {
    for (const auto& enemy : enemyList) {
        DrawBoxEx(enemy->pos_, 100, 30, false);
    }
}

void Enemy::Instance() {
    // �V�����G�̃C���X�^���X�𐶐����A�ʒu��ݒ肷��
    Enemy* newEnemy = new Enemy;
    newEnemy->pos_.x = GetRand(DXE_WINDOW_WIDTH);

    // ���������G�̃|�C���^��G���X�g�ɒǉ�����
    enemyList.push_back(newEnemy);
}
