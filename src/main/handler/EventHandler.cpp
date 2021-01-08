//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file EventHandler.cpp.cc
 */

#include "EventHandler.hpp"

namespace ormaniec
{

    bool EventHandler::receive(sf::Event& event)
    {
        if( eventHandlerMap.contains(event.type) )
        {
            eventHandlerMap[event.type]->handle(event);
            return true;
        }
        return false;
    }
    void EventHandler::registerEventHandler(sf::Event::EventType type, const std::shared_ptr<IEventHandler>& handlerPtr)
    {
        eventHandlerMap.emplace( type, handlerPtr);
    }
}