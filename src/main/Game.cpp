//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp.cc
 */

#include <thread>
#include <iostream>

#include <handler/event/input/KeyboardEventHandler.hpp>
#include <handler/event/input/MouseEventHandler.hpp>

#include "Game.hpp"

namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window")
    {
        std::shared_ptr<KeyboardEventHandler> keyboardHandler{new KeyboardEventHandler};
        std::shared_ptr<MouseEventHandler> mouseHandler{new MouseEventHandler};

        eventHandler.registerEventHandler(sf::Event::EventType::KeyPressed, keyboardHandler);
        eventHandler.registerEventHandler(sf::Event::EventType::KeyReleased, keyboardHandler);
        eventHandler.registerEventHandler(sf::Event::EventType::MouseButtonPressed, mouseHandler);
    }

    void Game::start()
    {
        while(renderWindow.isOpen())
        {
            gameLoop();
        }
    }
    void Game::gameLoop()
    {
        static unsigned               counter = 0ull;
        std::unique_ptr<sf::Drawable> drawable;

        if(counter++ % 2)
        {
            drawable = std::make_unique<sf::CircleShape>(65, 6);
            static_cast<sf::CircleShape*>(drawable.get())->setFillColor(sf::Color(255, 0, 0));
            static_cast<sf::CircleShape*>(drawable.get())->setPosition({20, 20});
        }
        else
        {
            drawable = std::make_unique<sf::RectangleShape>(sf::Vector2<float>(90, 90));
            static_cast<sf::CircleShape*>(drawable.get())
                ->setFillColor(sf::Color(( counter * counter ) % 255, counter % 255, 0));
            static_cast<sf::CircleShape*>(drawable.get())->setPosition({20, 20});
        }

        sf::Event event;
        while(renderWindow.pollEvent(event))
        {
            eventHandler.receive(event);
        }

        renderWindow.clear();
        renderWindow.draw(*drawable);
        renderWindow.display();
    }

}