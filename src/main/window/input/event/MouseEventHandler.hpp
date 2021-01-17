//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file MouseEventHandler.hpp
 */
#pragma once

#include "IEventHandler.hpp"

namespace ormaniec
{
    class MouseEventHandler
        : public IEventHandler
    {
    public:
        void handle(sf::Event& event) override;
    };
}
