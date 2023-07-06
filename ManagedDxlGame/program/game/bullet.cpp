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
    // 新しい弾のインスタンスを生成し、位置を設定する
    Bullet newBullet;
    is_Alive = true;
    newBullet.pos_.x = player.pos_.x;  // プレイヤーのx座標に弾を配置
    newBullet.pos_.y = player.pos_.y;  // プレイヤーのy座標に弾を配置

    // 生成した弾を弾リストに追加する
    bulletList.push_back(newBullet);
}
