//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file MouseEventHandler.cpp
 */

#include "MouseEventHandler.hpp"
#include <iostream>

namespace ormaniec
{

    void MouseEventHandler::handle(sf::Event& event)
    {
        std::cout << "MouseEventHandler reporting, \t\t";
        if( event.type == sf::Event::MouseButtonPressed )
        {
            std::cout << "Mouse button with id[" << event.key.code << "] pressed." << std::endl;
        }
        else if( event.type == sf::Event::MouseButtonReleased )
        {
            std::cout << "Mouse button with id[" << event.key.code << "] released." << std::endl;
        }
    }
}