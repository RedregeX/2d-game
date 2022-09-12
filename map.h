#pragma once
#include "Player.h"
#include "Coin.h"
#include <SFML/Graphics.hpp>

using namespace sf;

const int WINDOW_WIDTH = 1260;
const int WINDOW_HEIGHT = 720;
const int HEIGHT_MAP = 12;//размер карты высота
const int WIDTH_MAP = 21;//размер карты ширина

class Map {
public:
	Map();
	Player *getPlayer();
	void draw(RenderWindow& window);
	void update();

private:

	String TileMap[HEIGHT_MAP] = {
	"sssssssssssssssssssss",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sgggggggggggggggggggs",
	"sssssssssssssssssssss"

	};
	Coin* coin;
	Player *player;
	Image mapImage;
	Texture mapTexture;
	Sprite mapSprite;
	void init();
};
