#pragma once
#include "Collidable.h"
#include <vector>

class HitCollider {
public:
    void hit_player_enemy();
    void hit_enemy_bullet();

private:
    void hit_collisions(const Collidable& object1, const std::vector<Collidable*>& objects2);
};
