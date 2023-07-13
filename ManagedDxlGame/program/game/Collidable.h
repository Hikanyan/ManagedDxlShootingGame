#pragma once

class Collidable {
public:
    virtual ~Collidable() {} // ���z�f�X�g���N�^

    // �����蔻��ɕK�v�Ȉʒu���ƃT�C�Y���̎擾���\�b�h
    virtual float getX() const = 0;
    virtual float getY() const = 0;
    virtual float getWidth() const = 0;
    virtual float getHeight() const = 0;

    // �����蔻�肪���������ۂ̏������\�b�h
    virtual void onCollision() = 0;
};
