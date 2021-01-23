//
// Created by ormaniec on 23.01.2021.
//
/**
 * @file CloseInputMapper.hpp.h
 */
#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <window/event/handler/WindowEventManager.hpp>

#include <logic/event/handler/input/IInputMapper.hpp>

namespace ormaniec
{
    class CloseInputMapper
        : public IInputMapper
    {
    public:
        explicit CloseInputMapper(WindowEventManager& windowEventManager);
        void registerMapping(unsigned int importance, std::function<void()> function) override;

    private:
        void handle();

    private:
        std::map<unsigned, std::function<void()>, std::greater<> > actionMap;
        sf::RenderWindow& targetWindow;
    };
}


