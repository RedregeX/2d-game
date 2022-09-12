#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "map.h"
#include "Playermove.h"
#include "Camera.h"

using namespace sf;
using namespace std;

class Engine {
private:

public:
	RenderWindow window;
	Engine();
	Map map;
	void init();
	void loop();
	void draw();
	Playermove move;
	void update();
	Camera* camera;
};
