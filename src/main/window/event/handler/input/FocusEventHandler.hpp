#pragma once
#include <SFML/Graphics.hpp>
#include <window/event/handler/IEventHandler.hpp>

namespace carlos
{
    class FocusEventHandler
        : public ormaniec::IEventHandler
    {
        public:
            void handle(sf::Event& event) override;
    };
}