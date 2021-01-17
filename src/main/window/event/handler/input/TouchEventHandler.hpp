#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <window/event/handler/IEventHandler.hpp>

namespace carlos
{
    class TouchEventHandler
        : public ormaniec::IEventHandler
    {
        public:
            void handle(sf::Event& event) override;
    };
}