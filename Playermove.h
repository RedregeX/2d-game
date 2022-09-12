#pragma once
#include "Player.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Playermove {
private:
	Player* player;
public:
	Playermove();
	void setPlayer(Player* player);
	void action();
};