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
            // 弾を削除してメモリ解放する
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
    // 新しい弾のインスタンスを生成し、位置を設定する
    Bullet* newBullet = new Bullet;
    newBullet->pos_.x = player.pos_.x;  // プレイヤーのx座標に弾を配置
    newBullet->pos_.y = player.pos_.y;  // プレイヤーのy座標に弾を配置

    // 生成した弾のポインタを弾リストに追加する
    bulletList.push_back(newBullet);
}
