//
// Created by lenovo on 15.04.2021.
//
#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <window/event/handler/WindowEventManager.hpp>

#include <logic/event/handler/input/IInputMapper.hpp>

namespace carlos
{
    class ResizeInputMapper
        : public ormaniec::IInputMapper
    {
    public:
        explicit ResizeInputMapper(ormaniec::WindowEventManager& windowEventManager);
        void registerMapping(unsigned int importance, std::function<void()> function) override;

    private:
        void handle();

    private:
        std::map<unsigned, std::function<void()>> actionMap;
        sf::RenderWindow& targetWindow;
    };
}