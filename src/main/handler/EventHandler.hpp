//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file EventHandler.hpp.h
 */
#pragma once

#include "event/IEventHandler.hpp"

#include <map>
#include <memory>

namespace ormaniec
{
    class EventHandler
    {
    public:
        bool receive(sf::Event& event);
        void registerEventHandler(sf::Event::EventType, const std::shared_ptr<IEventHandler>&);

    private:
        std::map< sf::Event::EventType , std::shared_ptr<IEventHandler> > eventHandlerMap;
    };
}


