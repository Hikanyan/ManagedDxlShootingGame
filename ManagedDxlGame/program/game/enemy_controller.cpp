#include "../dxlib_ext/dxlib_ext.h"
#include "enemy.h"
#include "enemy_Controller.h"

enemy_controller enemyController;

void enemy_controller::update(float delta_time) {
    enemyController.time_ += delta_time;

   if (enemyController.time_ > 0.1f) {
        enemy.Instance();
        enemyController.time_ = 0;
    }
}

void enemy_controller::setup() {
    enemy.Instance();
}
void enemy_controller::enemySetup(float delta_time) {
    enemy.draw();
    enemy.update(delta_time);
}