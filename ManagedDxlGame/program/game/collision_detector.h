#pragma once
#include "Collidable.h"
#include <vector>


//���̃N���X�́A�����蔻����s���N���X�ł��B
class HitCollider {
public:
    
    void update(float delta_time);
private:
    void hit_player_enemy();
    void hit_enemy_bullet();
    //�����蔻����s���֐��i�������j
    void hit_common(Entity& firstList, std::vector<Entity*>& secondList);
};
extern HitCollider hit_collider;