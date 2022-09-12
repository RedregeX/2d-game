#include "Entity.h"
using namespace sf;

void Entity::init()
{
	Image image;
	image.loadFromFile(imagePass);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}

Entity::Entity(String imagePass)
{
	setImagePass(imagePass);
	init();
}

int Entity::getWidth()
{
	return width;
}

int Entity::getHeight()
{
	return height;
}
