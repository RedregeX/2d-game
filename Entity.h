#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Entity {
protected:
	Vector2f position;
	int width;
	int height;
	virtual void init();
	Sprite sprite;
	Texture texture;
	String imagePass;
public:
	Entity(String imagePass);
	int getWidth();
	int getHeight();
	void setWidth(int width);
	void setHeight(int height);
	void setPosition(Vector2f position);
	Sprite getSprite();
	String getImagePass();
	void setImagePass(String imagePass);
	void setTextureRect(IntRect rect);
	Vector2f getPosition();
};