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
        windowEventManager.subscribe(sf::Event::KeyReleased, [&](sf::Event& event) { handle(event); });
    }

    void KeyboardInputMapper::registerMapping(unsigned int keyCode, std::function<void()> func)
    {
        if(not actionMap.contains(keyCode))
        {
            actionMap.insert({static_cast<sf::Keyboard::Key>(keyCode), {func}});
        }
        else
        {
            actionMap[keyCode].push_back(func);
        }
        return;

        
    }   
    void KeyboardInputMapper::handle(sf::Event& event)
    {
        auto& keyCode = event.key.code;
        if(actionMap.contains(keyCode))  //wykonujemy akcję dla danego przycisku
        {
             auto& vec = actionMap[keyCode]; // vector akcji
                for( auto& action : vec )
                {
                    action();
                }
            
        }
    }
}