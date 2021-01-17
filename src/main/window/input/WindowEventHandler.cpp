//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file WindowEventHandler.cpp.cc
 */

#include "WindowEventHandler.hpp"

namespace ormaniec
{

    bool WindowEventHandler::receive(sf::Event& event)
    {
        if( eventHandlerMap.contains(event.type) )
        {
            eventHandlerMap[event.type]->handle(event);
            return true;
        }
        return false;
    }
    void WindowEventHandler::registerEventHandler(sf::Event::EventType type, const std::shared_ptr<IEventHandler>& handlerPtr)
    {
        eventHandlerMap.emplace( type, handlerPtr);
    }
}