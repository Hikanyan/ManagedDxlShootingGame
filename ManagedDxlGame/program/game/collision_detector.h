#pragma once
#include "Collidable.h"
#include <vector>


//このクラスは、当たり判定を行うクラスです。
class HitCollider {
public:
    
    void update(float delta_time);
private:
    void hit_player_enemy();
    void hit_enemy_bullet();
    //当たり判定を行う関数（未実装）
    void hit_common(Entity& firstList, std::vector<Entity*>& secondList);
};
extern HitCollider hit_collider;