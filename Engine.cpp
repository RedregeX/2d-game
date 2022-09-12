#include "Engine.h"

Engine::Engine()
{
	init();
}

void Engine::init()
{
	window.create(VideoMode(1260, 720), "Works");
    move.setPlayer(map.getPlayer());
    camera = new Camera(map.getPlayer());
}

void Engine::loop()
{
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) {
                window.close();
            }              
        }
        draw();
        update();
    }
}

void Engine::draw() 
{
    window.clear(Color::Green);
    window.setView(camera->getView());
    map.draw(window);
    window.display();
}

void Engine::update()
{
    move.action();
    map.update();
    camera->update();
}
