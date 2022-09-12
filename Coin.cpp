#include "Coin.h"
using namespace sf;

void Coin::init()
{
	Image image;
	image.loadFromFile("images/coin.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}

Coin::Coin(Vector2f position)
{
	init();
	setPosition(position);
}

void Coin::setPosition(Vector2f position)
{
	this->position = position;
	sprite.setPosition(position.x, position.y);
}

void Coin::setTextureRect(IntRect rect)
{
	sprite.setTextureRect(rect);
}

int Coin::getCwidth()
{
	return cwidth;
}

int Coin::getCheight()
{
	return cheight;
}

Sprite Coin::getSprite()
{
	return sprite;
}
