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
//        windowEventManager.subscribe(sf::Event::KeyReleased, [&](sf::Event& event) { handle(event); });
    }

    void KeyboardInputMapper::registerMapping(unsigned int keyCode, std::function<void()> func)
    {
        auto key = static_cast<sf::Keyboard::Key>(keyCode);
        if(not actionMap.contains(key))
        {
            actionMap.insert({key, {func}});
        }
        else
        {
            actionMap[key].push_back(func);
        }
        
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