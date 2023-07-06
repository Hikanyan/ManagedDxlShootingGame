#pragma once
#include "Enemy.h"

class EnemyController {
public:
    float time_ = 0;
    void update(float delta_time);
    void draw();
    void setup();
};

extern EnemyController enemyController;
