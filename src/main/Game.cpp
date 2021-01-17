//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp.cc
 */

#include <thread>

#include "window/input/event/KeyboardEventHandler.hpp"
#include "window/input/event/MouseEventHandler.hpp"
#include "window/input/event/CloseEventHandler.hpp"
#include "window/input/event/FocusEventHandler.hpp"
#include "window/input/event/TouchEventHandler.hpp"

#include "Game.hpp"

namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window")
    {
        windowEventHandler
            .registerEventHandler(sf::Event::Closed, std::make_shared<carlos::CloseEventHandler>(renderWindow));
    }

    void Game::start()
    {
        renderWindow.setFramerateLimit(15);
        while(renderWindow.isOpen())
        {
            gameLoop();
        }
    }
    void Game::gameLoop()
    {
        sf::Event event;
        while(renderWindow.pollEvent(event))
        {
            windowEventHandler.receive(event);
        }

        renderWindow.clear();
        renderWindow.display();
    }

}