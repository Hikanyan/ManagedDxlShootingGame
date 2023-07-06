#include <time.h>
#include <string>
#include <vector>
#include "../dxlib_ext/dxlib_ext.h"
#include "bullet.h"
#include "player.h"

Bullet bullet;
std::vector<Bullet*> bulletList;

void Bullet::update(float delta_time) {
    for (auto it = bulletList.begin(); it != bulletList.end(); ) {
        Bullet* bullet = *it;
        bullet->pos_.y -= Bullet::MOVE_SPEED;
        if (bullet->pos_.y <= 100) {
            // �e���폜���ă������������
            delete bullet;
            it = bulletList.erase(it);
        }
        else {
            ++it;
        }
    }
}

void Bullet::draw() {
    for (const auto& bullet : bulletList) {
        DrawBoxEx(bullet->pos_, 15, 50, false);
    }
}

void Bullet::Instance(Player& player) {
    // �V�����e�̃C���X�^���X�𐶐����A�ʒu��ݒ肷��
    Bullet* newBullet = new Bullet;
    newBullet->pos_.x = player.pos_.x;  // �v���C���[��x���W�ɒe��z�u
    newBullet->pos_.y = player.pos_.y;  // �v���C���[��y���W�ɒe��z�u

    // ���������e�̃|�C���^��e���X�g�ɒǉ�����
    bulletList.push_back(newBullet);
}
