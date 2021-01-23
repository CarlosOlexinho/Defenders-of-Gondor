//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.hpp
 */
#pragma once

#include "window/event/handler/WindowEventManager.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <logic/event/handler/input/UserInputMapper.hpp>

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
        sf::RenderWindow                    renderWindow;
        std::unique_ptr<UserInputMapper>    userInputMapperPtr;
        std::unique_ptr<WindowEventManager> windowEventManagerPtr;
    };
}


