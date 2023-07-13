#include "../dxlib_ext/dxlib_ext.h"
#include "collision_detector.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"

//�v���C���[�ƃG�l�~�[�ƒe�̓����蔻����s���܂��B

void HitCollider::hit_player_enemy() {
    //����͓G�̓����蔻��
    for (int i = 0; i < enemyList.size(); i++)
    {
        //�����œ����蔻����s��
        bool hit = tnl::IsIntersectRectToCorrectPosition(
            player.pos_, player.pos_, player.SIZE_WIDTH, player.SIZE_WIDTH,
            enemyList[i]->pos_, enemyList[i]->SIZE_WIDTH, enemyList[i]->SIZE_WIDTH
        );
        //�������Ă�����
        if (hit) {
            //�v���C���[��HP�����炷
            player.hp_ -= 1;
            //�G������
            delete enemyList[i];
            enemyList.erase(enemyList.begin() + i);
            //�G���������烋�[�v�𔲂���
            break;
        }
    }
}

//�e�ƓG�̓����蔻��
void HitCollider::hit_enemy_bullet() {
    //����͓G�̓����蔻��
for (int i = 0; i < enemyList.size(); i++)
	{
		//�����œ����蔻����s��
		for (int j = 0; j < bulletList.size(); j++)
		{
			bool hit = tnl::IsIntersectRectToCorrectPosition(
				bulletList[j]->pos_, bulletList[j]->pos_, bulletList[j]->SIZE_WIDTH, bulletList[j]->SIZE_WIDTH,
				enemyList[i]->pos_, enemyList[i]->SIZE_WIDTH, enemyList[i]->SIZE_WIDTH
			);
			//�������Ă�����
			if (hit) {
				//�G��HP�����炷
				enemyList[i]->hp_ -= 1;
				//�e������
				delete bulletList[j];
				bulletList.erase(bulletList.begin() + j);
				//�e���������烋�[�v�𔲂���
				break;
			}
		}
	}
}

