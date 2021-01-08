//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp.cc
 */

#include <thread>
#include "Game.hpp"

namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window") { }

    void Game::start()
    {
        while(renderWindow.isOpen())
        {
            gameLoop();
        }
    }
    void Game::gameLoop()
    {
        static unsigned counter = 0ull;
        std::unique_ptr<sf::Drawable> drawable;

        if( counter++ % 2 )
        {
            drawable = std::make_unique<sf::CircleShape>(65, 6);
            static_cast<sf::CircleShape*>(drawable.get())->setFillColor(sf::Color(255, 0, 0));
            static_cast<sf::CircleShape*>(drawable.get())->setPosition({20, 20});
        }
        else
        {
            drawable = std::make_unique<sf::RectangleShape>(sf::Vector2<float>(90,90));
            static_cast<sf::CircleShape*>(drawable.get())->setFillColor(sf::Color((counter*counter)%255, counter%255, 0));
            static_cast<sf::CircleShape*>(drawable.get())->setPosition({20, 20});
        }

        // sf::Event event;
        // while(renderWindow.pollEvent(event))
        // {
        //     if(event.type == sf::Event::Closed)
        //     {
        //         renderWindow.close();
        //     }
        // }

        renderWindow.clear();
        renderWindow.draw(*drawable);
        renderWindow.display();

        std::this_thread::sleep_for(std::chrono::seconds(1));

    }

}