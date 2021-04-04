//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.cpp
 */

#include "MouseInputMapper.hpp"
#include <utility>
#include <vector>

namespace ormaniec
{
    void MouseInputMapper::registerMapping(unsigned int i, std::function<void()> function)
    {
        if (not actionMap.contains(static_cast<const sf::Mouse::Button>(i)))
        {
            actionMap.insert({static_cast<sf::Mouse::Button>(i), {function}});
        }

        else
        {
            actionMap[static_cast<const sf::Mouse::Button>(i)].push_back(function);
        }
    }
    MouseInputMapper::MouseInputMapper(WindowEventManager& windowEventManager)
    {
        windowEventManager.subscribe(sf::Event::MouseButtonPressed, [&](sf::Event& event)
        {
            auto& mouseButton = event.mouseButton.button;
            if(actionMap.contains(mouseButton))
            {
                auto& vec = actionMap[mouseButton]; // vector akcji
                for( auto& action : vec )
                {
                    action();
                }
            }
        });
    }
}


//   if (actionMap.contains(sf::Event::MouseButtonPressed, function))
//         {
//             actionMap.push_back(function);
//         }

//         else
//         {
//             actionMap.insert({static_cast<sf::Mouse::Button>, function});
//         }