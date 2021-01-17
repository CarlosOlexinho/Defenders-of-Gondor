#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "IEventHandler.hpp"

namespace carlos
{
    class TouchEventHandler
        : public ormaniec::IEventHandler
    {
        public:
            void handle(sf::Event& event) override;
    };
}