#include "Camera.h"
using namespace sf;

void Camera::init()
{
	view.reset(FloatRect(0, 0, 800, 500));
}

Camera::Camera(Player* player)
{
	this->player = player;
	init();
}

void Camera::update()
{
	setCenter();
}

View Camera::getView()
{
	return view;
}

void Camera::setCenter()
{
	int x = player->getPosition().x;
	int y = player->getPosition().y;
	if (x < left) {
		x = left;
	}
	if (x > right) {
		x = right;
	}
	if (y < top) {
		y = top;
	}
	if (y > bottom) {
		y = bottom;
	}
	view.setCenter(x, y);
}