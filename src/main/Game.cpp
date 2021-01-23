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
        windowEventManagerPtr = std::make_unique<WindowEventManager>(renderWindow);
        userInputMapperPtr = std::make_unique<UserInputMapper>(*windowEventManagerPtr);

        userInputMapperPtr->getKeyboardMapper().registerMapping(sf::Keyboard::D, []{ std::cout << "You are pressing D." << std::endl; });
        userInputMapperPtr->getCloseMapper().registerMapping(0, []
        {
            std::cout << "Thank you very much for using our application!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(5));
        });
        userInputMapperPtr->getCloseMapper().registerMapping(1, []
        {
            std::cout << "Closing..." << std::endl;
        });
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
            windowEventManagerPtr->receive(event);
        }

        renderWindow.clear();
        renderWindow.display();
    }

}