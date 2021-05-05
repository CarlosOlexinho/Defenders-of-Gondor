//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file WindowEventManager.cpp
 */

#include "WindowEventManager.hpp"

namespace ormaniec
{
    void WindowEventManager::subscribe(sf::Event::EventType type, std::function<void(sf::Event&)> action)
    {
        if(not eventSubscriberMap.contains(type))
        {
            eventSubscriberMap.insert({type, {action}});
        }
        else
        {
            eventSubscriberMap[type].push_back(action);
        }
    }

    bool WindowEventManager::receive(sf::Event& event)
    {
        if(eventSubscriberMap.contains(event.type))
        {
            for(auto& savedAction : eventSubscriberMap[event.type])
            {
                savedAction(event);
            }
        }
    }
    WindowEventManager::WindowEventManager(sf::RenderWindow& renderWindow) : renderWindow(renderWindow) { }
    sf::RenderWindow& WindowEventManager::getBoundWindow() const
    {
        return renderWindow;
    }
}