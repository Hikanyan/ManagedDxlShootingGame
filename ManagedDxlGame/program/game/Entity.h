#pragma once

#include "../dxlib_ext/dxlib_ext.h"

// Player, Enemy, Bulletに継承させるためのクラス
class Entity {
public:
    int hp_; // オブジェクトの体力
    tnl::Vector3 pos_; // オブジェクトの位置
    static constexpr int MOVE_SPEED = 5; // オブジェクトの移動速度
    static constexpr int SIZE_WIDTH = 5; // オブジェクトの幅
    static constexpr int SIZE_HEIGHT = 5; // オブジェクトの高さ

    void update(float delta_time); // オブジェクトの更新
    void draw(); // オブジェクトの描画
};