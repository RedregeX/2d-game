#include "Player.h"
#include "map.h"

void Player::init() {
	Image image;
	image.loadFromFile("images/player.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	setTextureRect(IntRect(0, 0, 80, 120));
	setPosition(Vector2f(200, 200));
}

Player::Player()
{
	init();
}

void Player::setPosition(Vector2f pos)
{
	position = pos;
	sprite.setPosition(position.x, position.y);
}

Vector2f Player::getPosition()
{
	return sprite.getPosition();
}

void Player::setTextureRect(IntRect rect)
{
	sprite.setTextureRect(rect);
}

Sprite Player::getSprite()
{
	return sprite;
}

Vector2f Player::getSpeed()
{
	return speed;
}

void Player::setSpeed(Vector2f speed)
{
	this->speed = speed;
}

void Player::update()
{
	sprite.move(speed.x, speed.y);
	position = sprite.getPosition();
	stopMove();
}

int Player::getWidth()
{
	return pwidth;
}

int Player::getHeight()
{
	return pheight;
}

void Player::setWidth(int pwidth)
{
	this->pwidth = pwidth;
}

void Player::setHeight(int pheight)
{
	this->pheight = pheight;
}

void Player::stopMove()
{
	if (position.x > WINDOW_WIDTH - pwidth) {
		position.x = WINDOW_WIDTH - pwidth;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.x < 0) {
		position.x = 0;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.y < 0) {
		position.y = 0;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.y > WINDOW_HEIGHT - pheight) {
		position.y = WINDOW_HEIGHT - pheight;
		setPosition(Vector2f(position.x, position.y));
	}
}