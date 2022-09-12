#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Coin {
private:
	Vector2f position;
	Sprite sprite;
	Texture texture;
	void init();
	int cwidth = 32;
	int cheight = 32;
public:
	Coin(Vector2f position);
	void setPosition(Vector2f position);
	void setTextureRect(IntRect rect);
	int getCwidth();
	int getCheight();
	void setCwidth(int cwidth);
	void setCheight(int cheight);
	Sprite getSprite();
};