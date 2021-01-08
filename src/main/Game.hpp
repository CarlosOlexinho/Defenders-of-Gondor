//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.hpp.h
 */
#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

namespace ormaniec
{
    class Game
    {
    public:
        Game();
        void start();

    private:
        void gameLoop();

    private:
        sf::RenderWindow renderWindow;
    };
}


