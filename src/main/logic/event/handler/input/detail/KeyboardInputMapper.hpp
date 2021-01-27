//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file KeyboardInputHandler.hpp
 */
#pragma once

#include <logic/event/handler/input/IInputMapper.hpp>
#include <memory>
#include <window/event/handler/WindowEventManager.hpp>

namespace ormaniec
{
    class KeyboardInputMapper
        : public IInputMapper
    {
    public:
        explicit KeyboardInputMapper(WindowEventManager& windowEventManager);
        void registerMapping(unsigned int keyCode, std::function<void()> func) override;

    private:
        void handle(sf::Event& event);

    private:
        std::map<sf::Keyboard::Key, std::function<void()>> actionMap;
    };
}


