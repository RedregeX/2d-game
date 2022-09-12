#include "Playermove.h"

Playermove::Playermove()
{
}

void Playermove::setPlayer(Player* player)
{
	this->player = player;
}

void Playermove::action()
{
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		player->setSpeed(Vector2f(0.1, 0));
		player->setTextureRect(IntRect(int (player->cframe) * 80, 3 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Left)) {
		player->setSpeed(Vector2f(-0.1, 0));
		player->setTextureRect(IntRect(int(player->cframe) * 80, 2 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		player->setSpeed(Vector2f(0, 0.1));
		player->setTextureRect(IntRect(int(player->cframe) * 80, 0, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up)) {
		player->setSpeed(Vector2f(0, -0.1));
		player->setTextureRect(IntRect(int(player->cframe) * 80, 120, 80, 120));
	}
	else {
		player->setSpeed(Vector2f(0, 0));
	}
	player->cframe += 0.005;
	if (player->cframe > 4) {
		player->cframe = 0;
	}
}
