#pragma once

class Collidable {
public:
    virtual ~Collidable() {} // 仮想デストラクタ

    // 当たり判定に必要な位置情報とサイズ情報の取得メソッド
    virtual float getX() const = 0;
    virtual float getY() const = 0;
    virtual float getWidth() const = 0;
    virtual float getHeight() const = 0;

    // 当たり判定が発生した際の処理メソッド
    virtual void onCollision() = 0;
};
