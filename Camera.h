#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;

const int left = 400;
const int right = 860;
const int top = 250;
const int bottom = 470;

class Camera {
private:
	View view;
	Player* player;
	void setCenter();
	void init();
public:
	Camera(Player* player);
	void update();
	View getView();
};