//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file EventHandlerStorage.cpp
 */

#include "EventHandlerStorage.hpp"

namespace ormaniec
{

    bool EventHandlerStorage::receive(sf::Event& event)
    {
        if( eventHandlerMap.contains(event.type) )
        {
            eventHandlerMap[event.type]->handle(event);
            return true;
        }
        return false;
    }
    void EventHandlerStorage::registerEventHandler(sf::Event::EventType type, const std::shared_ptr<IEventHandler>& handlerPtr)
    {
        eventHandlerMap.emplace( type, handlerPtr);
    }
}