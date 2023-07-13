#include "../dxlib_ext/dxlib_ext.h"
#include "collision_detector.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"

//プレイヤーとエネミーと弾の当たり判定を行います。

void HitCollider::hit_player_enemy() {
    //これは敵の当たり判定
    for (int i = 0; i < enemyList.size(); i++)
    {
        //ここで当たり判定を行う
        bool hit = tnl::IsIntersectRectToCorrectPosition(
            player.pos_, player.pos_, player.SIZE_WIDTH, player.SIZE_WIDTH,
            enemyList[i]->pos_, enemyList[i]->SIZE_WIDTH, enemyList[i]->SIZE_WIDTH
        );
        //当たっていたら
        if (hit) {
            //プレイヤーのHPを減らす
            player.hp_ -= 1;
            //敵を消す
            delete enemyList[i];
            enemyList.erase(enemyList.begin() + i);
            //敵を消したらループを抜ける
            break;
        }
    }
}
