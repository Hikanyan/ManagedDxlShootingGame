#pragma once

#include "../dxlib_ext/dxlib_ext.h"

// Player, Enemy, Bullet�Ɍp�������邽�߂̃N���X
class Entity {
public:
    int hp_; // �I�u�W�F�N�g�̗̑�
    tnl::Vector3 pos_; // �I�u�W�F�N�g�̈ʒu
    static constexpr int MOVE_SPEED = 5; // �I�u�W�F�N�g�̈ړ����x
    static constexpr int SIZE_WIDTH = 5; // �I�u�W�F�N�g�̕�
    static constexpr int SIZE_HEIGHT = 5; // �I�u�W�F�N�g�̍���

    void update(float delta_time); // �I�u�W�F�N�g�̍X�V
    void draw(); // �I�u�W�F�N�g�̕`��
};