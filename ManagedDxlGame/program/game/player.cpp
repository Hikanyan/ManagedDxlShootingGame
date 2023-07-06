#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"
#include "bullet.h"
Player player;

void Player::update(float delta_time) {
	if (tnl::Input::IsKeyDown(eKeys::KB_A))pos_.x -= Player::MOVE_SPEED;
	if (tnl::Input::IsKeyDown(eKeys::KB_D))pos_.x += Player::MOVE_SPEED;
	if (tnl::Input::IsKeyDown(eKeys::KB_SPACE)) bullet.Instance(player);
}
void Player::draw() {
	DrawBoxEx(player.pos_, 100, 30, false);
}