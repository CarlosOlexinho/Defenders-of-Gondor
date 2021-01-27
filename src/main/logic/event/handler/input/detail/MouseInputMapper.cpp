//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.cpp
 */

#include "MouseInputMapper.hpp"
#include <utility>

namespace ormaniec
{
    void MouseInputMapper::registerMapping(unsigned int i, std::function<void()> function)
    {
        actionMap.insert({static_cast<sf::Mouse::Button>(i), function});
    }
    MouseInputMapper::MouseInputMapper(WindowEventManager& windowEventManager)
    {
        windowEventManager.subscribe(sf::Event::MouseButtonPressed, [&](sf::Event& event){
            auto& mouseButton = event.mouseButton.button;
        if(actionMap.contains(mouseButton))
        {
            actionMap[mouseButton]();
        }
        });
    }
}