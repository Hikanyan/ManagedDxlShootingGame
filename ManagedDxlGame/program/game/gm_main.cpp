#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "gm_main.h"
#include "player.h"
#include "bullet.h"
#include "enemy_Controller.h"
#include "collision_detector.h"


// 列挙型(enum)を使用してゲームの状態を定義する
enum GameState {
	Title,
	PlayGame,
	Result
};

GameState currentState;
//------------------------------------------------------------------------------------------------------------
// ゲーム起動時に１度だけ実行されます
void gameStart() {
	srand(time(0));

	enemyController.setup();
}

//------------------------------------------------------------------------------------------------------------
// 毎フレーム実行されます
void gameMain(float delta_time) {
	player.draw();
	player.update(delta_time);
	bullet.draw();
	bullet.update(delta_time);
	enemyController.enemySetup(delta_time);
	enemyController.update(delta_time);
	hit_collider.update(delta_time);
}

//------------------------------------------------------------------------------------------------------------
// ゲーム終了時に１度だけ実行されます
void gameEnd() {

}
