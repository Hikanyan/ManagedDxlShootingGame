#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "gm_main.h"
#include "player.h"
#include "bullet.h"
#include "enemy_Controller.h"
#include "collision_detector.h"


// �񋓌^(enum)���g�p���ăQ�[���̏�Ԃ��`����
enum GameState {
	Title,
	PlayGame,
	Result
};

GameState currentState;
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
	hit_collider.update(delta_time);
}

//------------------------------------------------------------------------------------------------------------
// �Q�[���I�����ɂP�x�������s����܂�
void gameEnd() {

}
