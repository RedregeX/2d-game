#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

class Player {
private:
	Vector2f position;
	Sprite sprite;
	Texture texture;
	void init();
	Vector2f speed;
	int pwidth = 80;
	int pheight = 120;
	void stopMove();
public:
	Player();
	float cframe = 0;
	void setPosition(Vector2f pos);
	Vector2f getPosition();
	void setTextureRect(IntRect rect);
	Sprite getSprite();
	Vector2f getSpeed();
	void setSpeed(Vector2f speed);
	void update();
	int getWidth();
	int getHeight();
	void setWidth(int pwidth);
	void setHeight(int pheight);
};