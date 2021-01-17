//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file EventHandlerStorage.hpp
 */
#pragma once

#include <window/event/handler/IEventHandler.hpp>

#include <map>
#include <memory>

namespace ormaniec
{
    class EventHandlerStorage
    {
    public:
        bool receive(sf::Event& event);
        void registerEventHandler(sf::Event::EventType, const std::shared_ptr<IEventHandler>&);

    private:
        std::map< sf::Event::EventType , std::shared_ptr<IEventHandler> > eventHandlerMap;
    };
}


