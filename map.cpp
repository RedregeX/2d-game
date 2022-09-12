#include "map.h"

void Map::init()
{
	mapImage.loadFromFile("images/map.png");
	mapTexture.loadFromImage(mapImage);
	mapSprite.setTexture(mapTexture);
	coin = new Coin(Vector2f(100, 100));
	player = new Player();
}

Map::Map()
{
	init();
}

void Map::draw(RenderWindow& window)
{
	for (int i = 0; i < HEIGHT_MAP; i++) {
		for (int j = 0; j < WIDTH_MAP; j++) {
			if (TileMap[i][j] == 's') {
				mapSprite.setTextureRect(IntRect(0, 0, 60, 60));
			}
			if (TileMap[i][j] == 'g') {
				mapSprite.setTextureRect(IntRect(0, 60, 60, 60));
			}
			mapSprite.setPosition(j * 60, i * 60);
			window.draw(mapSprite);
		}
	}
	window.draw(coin->getSprite());
	window.draw(player->getSprite());
}

void Map::update()
{
	player->update();
}

Player* Map::getPlayer()
{
	return player;
}
