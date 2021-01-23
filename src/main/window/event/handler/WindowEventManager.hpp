//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file WindowEventManager.hpp
 */
#pragma once

#include <window/event/handler/IEventHandler.hpp>

#include <map>
#include <memory>
#include <SFML/Graphics/RenderWindow.hpp>

namespace ormaniec
{
    class WindowEventManager
    {
    public:
        explicit WindowEventManager(sf::RenderWindow& renderWindow);
        bool receive(sf::Event& event);
        void subscribe(sf::Event::EventType type, std::function<void(sf::Event&)> action);

        sf::RenderWindow& getBoundWindow() const;
    private:
        sf::RenderWindow& renderWindow;
        std::map<sf::Event::EventType, std::vector<std::function<void(sf::Event&)>>> eventSubscriberMap;
    };
}


