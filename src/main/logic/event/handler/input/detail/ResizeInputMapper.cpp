//
// Created by lenovo on 15.04.2021.
//

#include "ResizeInputMapper.hpp"
#include <iostream>

namespace carlos
{
    ResizeInputMapper::ResizeInputMapper(ormaniec::WindowEventManager& windowEventManager)
        : targetWindow(windowEventManager.getBoundWindow())
    {
        windowEventManager.subscribe(sf::Event::Resized, [&](sf::Event& event) { handle(); });
    }

    void ResizeInputMapper::registerMapping(unsigned int importance, std::function<void()> function)
    {
        actionMap.insert({importance, function});
    }

    void ResizeInputMapper::handle()
    {
        std::cout << "Window size: [" << targetWindow.getSize().x << ", " << targetWindow.getSize().y << "]" << std::endl;
        for(auto& actionMapping : actionMap)
        {
            actionMapping.second();
        }
    }
}