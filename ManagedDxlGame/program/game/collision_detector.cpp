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
