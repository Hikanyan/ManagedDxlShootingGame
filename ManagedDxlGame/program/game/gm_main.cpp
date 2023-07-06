#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "gm_main.h"
#include "player.h"
#include "bullet.h"
#include "EnemyController.h"
//------------------------------------------------------------------------------------------------------------
// �Q�[���N�����ɂP�x�������s����܂�
void gameStart() {
	srand(time(0));

	enemyController.setup();
}

//------------------------------------------------------------------------------------------------------------
// ���t���[�����s����܂�
void gameMain(float delta_time) {
	player.draw();
	player.update(delta_time);
	bullet.draw();
	bullet.update(delta_time);
	enemyController.enemySetup(delta_time);
	enemyController.update(delta_time);
}

//------------------------------------------------------------------------------------------------------------
// �Q�[���I�����ɂP�x�������s����܂�
void gameEnd() {

}
