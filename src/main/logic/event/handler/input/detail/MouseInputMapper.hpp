//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.hpp
 */
#pragma once

#include <memory>

#include <logic/event/handler/input/IInputMapper.hpp>
#include <window/event/handler/WindowEventManager.hpp>

namespace ormaniec
{
    class MouseInputMapper
        : public IInputMapper
    {
    public:
        explicit MouseInputMapper(WindowEventManager& windowEventManager);
        void registerMapping(unsigned int i, std::function<void()> function) override;

    private:
    std::map<sf::Mouse::Button, std::function<void()>> actionMap;
    };
}