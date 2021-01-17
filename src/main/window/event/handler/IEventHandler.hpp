//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file IEventHandler.hpp
 */
#pragma once

#include <SFML/Window/Event.hpp>
#include <memory>

namespace ormaniec
{
    struct IEventHandler
    {
        virtual void handle( sf::Event& event ) = 0;
        virtual void registerAction(unsigned int id, std::function<void()> action) {};

        virtual ~IEventHandler() = default;
    };
}


