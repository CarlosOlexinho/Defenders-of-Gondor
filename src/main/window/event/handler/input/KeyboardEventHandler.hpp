//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file KeyboardInputHandler.hpp
 */
#pragma once

#include <window/event/handler/IEventHandler.hpp>

#include <map>
#include <memory>

namespace ormaniec
{
    class KeyboardEventHandler
        : public IEventHandler
    {
    public:
        void handle(sf::Event& event) override;
        void registerAction(unsigned int id, std::function<void()> action) override;

    private:
        std::map<sf::Keyboard::Key, std::function<void()>> actionMapping;
    };
}


