#pragma once
#include "enemy.h"

class enemy_controller {
public:
    float time_ = 0;
    void update(float delta_time);
    void draw();
    void setup();
    void enemySetup(float delta_time);
};

extern enemy_controller enemyController;
