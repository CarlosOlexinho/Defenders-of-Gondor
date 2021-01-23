//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file KeyboardInputHandler.cpp
 */

#include "KeyboardInputMapper.hpp"

#include <utility>
#include <iostream>

namespace ormaniec
{
    KeyboardInputMapper::KeyboardInputMapper(WindowEventManager& windowEventManager)
    {
        windowEventManager.subscribe(sf::Event::KeyPressed, [&](sf::Event& event) { handle(event); });
    }

    void KeyboardInputMapper::registerMapping(unsigned int keyCode, std::function<void()> func)
    {
        actionMap.insert({static_cast<sf::Keyboard::Key>(keyCode), func});
    }
    void KeyboardInputMapper::handle(sf::Event& event)
    {
        auto& keyCode = event.key.code;
        if(actionMap.contains(keyCode))
        {
            actionMap[keyCode]();
        }
    }
}