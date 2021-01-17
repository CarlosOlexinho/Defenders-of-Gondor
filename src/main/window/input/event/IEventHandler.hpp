//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file IEventHandler.hpp
 */
#pragma once

#include <SFML/Window/Event.hpp>

namespace ormaniec
{
    struct IEventHandler
    {
        virtual void handle( sf::Event& event ) = 0;

        virtual ~IEventHandler() = default;
    };
}


