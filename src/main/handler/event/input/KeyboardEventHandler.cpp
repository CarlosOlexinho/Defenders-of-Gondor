//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file KeyboardInputHandler.cpp
 */

#include "KeyboardEventHandler.hpp"
#include <iostream>

namespace ormaniec
{
    void KeyboardEventHandler::handle(sf::Event& event)
    {
        std::cout << "KeyboardEventHandler reporting, \t\t";
        if( event.type == sf::Event::KeyPressed )
        {
            std::cout << "Keyboard key with id[" << event.key.code << "] pressed." << std::endl;
        }
        else if( event.type == sf::Event::KeyReleased )
        {
            std::cout << "Keyboard key with id[" << event.key.code << "] released." << std::endl;
        }
    }
}