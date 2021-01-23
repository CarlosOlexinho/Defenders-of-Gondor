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
        std::shared_ptr<MouseEventHandler> mouseEventHandler{new MouseEventHandler};

        windowEventHandler.registerEventHandler(sf::Event::Closed, closeEventHandler);
        windowEventHandler.registerEventHandler(sf::Event::KeyPressed, keyboardEventHandler);
        windowEventHandler.registerEventHandler(sf::Event::MouseButtonPressed, mouseEventHandler);

        userInputMapper = std::make_unique<UserInputMapper>(keyboardEventHandler,mouseEventHandler);

        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::D, []{ std::cout << "Button D has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::W, []{ std::cout << "Button W has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::S, []{ std::cout << "Button S has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::A, []{ std::cout << "Button A has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::LControl, []{ std::cout << "Button Left Control has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Up, []{ std::cout << "Button Up Arrow has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Down, []{ std::cout << "Button Down Arrow has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Left, []{ std::cout << "Button Left Arrow has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Right, []{ std::cout << "Button Right Arrow has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Numpad8, []{ std::cout << "Button 8 on Numpad has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Numpad2, []{ std::cout << "Button 2 on Numpad has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Numpad4, []{ std::cout << "Button 4 on Numpad has been pressed!" << std::endl; });
        userInputMapper->getKeyboardMapper().registerMapping(sf::Keyboard::Numpad6, []{ std::cout << "Button 6 on Numpad has been pressed!" << std::endl; });


        userInputMapper->getMouseMapper().registerMapping(sf::Mouse::Left, [] {std::cout << "Left Mouse button has been pressed!" << std::endl; });
        userInputMapper->getMouseMapper().registerMapping(sf::Mouse::Middle, [] {std::cout << "Middle Mouse button has been pressed!" << std::endl; });
        userInputMapper->getMouseMapper().registerMapping(sf::Mouse::Right, [] {std::cout << "Right Mouse button has been pressed!" << std::endl; });


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