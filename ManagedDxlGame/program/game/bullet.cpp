#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "bullet.h"
#include "player.h"

Bullet bullet;
std::vector<Bullet> bulletList;

void Bullet::update(float delta_time) {
    for (auto&& bullet : bulletList) {
        bullet.pos_.y -= Bullet::MOVE_SPEED;
    }
}

void Bullet::draw() {
    for (auto&& bullet : bulletList) {
        DrawBoxEx(bullet.pos_, 15, 50, false);
    }    
}

void Bullet::Instance(Player& player) {
    // �V�����e�̃C���X�^���X�𐶐����A�ʒu��ݒ肷��
    Bullet newBullet;
    is_Alive = true;
    newBullet.pos_.x = player.pos_.x;  // �v���C���[��x���W�ɒe��z�u
    newBullet.pos_.y = player.pos_.y;  // �v���C���[��y���W�ɒe��z�u

    // ���������e��e���X�g�ɒǉ�����
    bulletList.push_back(newBullet);
}
