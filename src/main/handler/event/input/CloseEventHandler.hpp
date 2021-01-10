#pragma once
#include <SFML/Graphics.hpp>
#include <handler/event/IEventHandler.hpp>

namespace carlos
{
    class CloseEventHandler
        : public ormaniec::IEventHandler
    {
    public: 

        CloseEventHandler(sf::RenderWindow& window);
        void handle(sf::Event& event) override;
        sf::RenderWindow& window;
    };


}