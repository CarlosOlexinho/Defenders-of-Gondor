//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file KeyboardInputHandler.hpp
 */
#pragma once

#include <handler/event/IEventHandler.hpp>

namespace ormaniec
{
    class KeyboardEventHandler
        : public IEventHandler
    {
    public:
        void handle(sf::Event& event) override;
    };
}


