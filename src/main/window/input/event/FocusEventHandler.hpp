#pragma once
#include <SFML/Graphics.hpp>
#include "IEventHandler.hpp"

namespace carlos
{
    class FocusEventHandler
        : public ormaniec::IEventHandler
    {
        public:
            void handle(sf::Event& event) override;
    };
}