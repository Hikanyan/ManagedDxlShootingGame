#include "../dxlib_ext/dxlib_ext.h"
#include "collision_detector.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"

//プレイヤーとエネミーと弾の当たり判定を行います。
HitCollider hit_collider;
void HitCollider::hit_player_enemy() {
	hit_common(player, enemyList);
}

//弾と敵の当たり判定
void HitCollider::hit_enemy_bullet() {
	hit_common(enemyList, bulletList);
}

void HitCollider::hit_common(Entity& firstList, std::vector<Entity*>& secondList) {
	for (int i = 0; i < firstList.size(); i++) {
		for (int j = 0; j < secondList.size(); j++) {
			bool hit = tnl::IsIntersectRectToCorrectPosition(
				firstList[i]->pos_, firstList[i]->pos_, firstList[i]->SIZE_WIDTH, firstList[i]->SIZE_WIDTH,
				secondList[j]->pos_, secondList[j]->SIZE_WIDTH, secondList[j]->SIZE_WIDTH
			);

			if (hit) {
				firstList[i]->hp_ -= 1;
				delete secondList[j];
				secondList.erase(secondList.begin() + j);
				break;
			}
		}
	}
}


void HitCollider::update(float delta_time) {
	hit_player_enemy();
	hit_enemy_bullet();
}