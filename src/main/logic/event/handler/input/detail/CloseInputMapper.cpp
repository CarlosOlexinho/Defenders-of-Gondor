//
// Created by ormaniec on 23.01.2021.
//
/**
 * @file CloseInputMapper.cpp.cc
 */

#include "CloseInputMapper.hpp"
#include <iostream>

namespace ormaniec
{
    CloseInputMapper::CloseInputMapper(WindowEventManager& windowEventManager)
        : targetWindow(windowEventManager.getBoundWindow())
    {
        windowEventManager.subscribe(sf::Event::Closed, [&](sf::Event& event){ handle(); });
    }

    void CloseInputMapper::registerMapping(unsigned importance, std::function<void(void*)> function)
    {
        actionMap.insert({importance, function});
    }
    void CloseInputMapper::handle()
    {
        for( auto& actionMapping : actionMap )
        {
            std::cout << "importance: " << actionMapping.first << std::endl;
            actionMapping.second(nullptr);
        }
        targetWindow.close();
    }
}