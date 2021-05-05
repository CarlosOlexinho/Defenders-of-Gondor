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
        windowEventManager.subscribe(sf::Event::Resized, [&](sf::Event& event){handle();});
    }
    void ResizeInputMapper::registerMapping(unsigned int importance, std::function<void()> function)
    {
        actionMap.insert({importance, function});
    }
    void ResizeInputMapper::handle()
    {
        for( auto& actionMapping : actionMap )
        {
            sf::Event event;
            if(event.type = sf::Event::Resized)
            {
                std::cout << static_cast<float>(event.size.width) << std::endl;
                std::cout << static_cast<float >(event.size.height) << std::endl;
            }
        }
    }
}