#include "EnemyController.h"
#include "../dxlib_ext/dxlib_ext.h"
#include "Enemy.h"

EnemyController enemyController;

void EnemyController::update(float delta_time) {
    enemyController.time_ += delta_time;

   if (enemyController.time_ > 0.1f) {
        enemy.Instance();
        enemyController.time_ = 0;
    }
}

void EnemyController::setup() {
    enemy.Instance();
}
