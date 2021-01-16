#pragma once
#include <SFML/Graphics.hpp>
#include <handler/event/IEventHandler.hpp>

namespace carlos
{
    class TouchEventHandler
        : public ormaniec::IEventHandler
    {
        public:

            TouchEventHandler(sf::RenderWindow& window);
            void handle(sf::Event& event) override;
            sf::RenderWindow& window;
            
    };
}