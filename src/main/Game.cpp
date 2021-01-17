//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp
 */

#include <thread>
#include <iostream>

#include "window/event/handler/input/KeyboardEventHandler.hpp"
#include "window/event/handler/input/MouseEventHandler.hpp"
#include "window/event/handler/input/CloseEventHandler.hpp"
#include "window/event/handler/input/FocusEventHandler.hpp"
#include "window/event/handler/input/TouchEventHandler.hpp"

#include "Game.hpp"

namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window")
    {
        std::shared_ptr<carlos::CloseEventHandler> closeEventHandler{new carlos::CloseEventHandler(renderWindow)};
        std::shared_ptr<KeyboardEventHandler> keyboardEventHandler{new KeyboardEventHandler};

        windowEventHandler.registerEventHandler(sf::Event::Closed, closeEventHandler);
        windowEventHandler.registerEventHandler(sf::Event::KeyPressed, keyboardEventHandler);

        userInputMapper = std::make_unique<UserInputMapper>(keyboardEventHandler);

        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::D, []{ std::cout << "Button D has been pressed!" << std::endl; });
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