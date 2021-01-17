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
        if( event.type == sf::Event::KeyPressed )
        {
            if(not actionMapping.contains(event.key.code)) return;
            auto& action = actionMapping.at(event.key.code);
            action();
        }

    }
    void KeyboardEventHandler::registerAction(unsigned int id, std::function<void()> action)
    {
        actionMapping.emplace(static_cast<sf::Keyboard::Key>(id), action);
    }

}