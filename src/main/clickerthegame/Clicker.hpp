#pragma once

#include <logic/event/handler/input/IInputMapper.hpp>
#include <memory>
#include <window/event/handler/WindowEventManager.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

namespace carlos
{
    class Clicker
    {
        public:
            explicit Clicker(ormaniec::WindowEventManager& windowEventManager);
            void registerMapping(
                unsigned int i, std::function<void()> function,
                unsigned int keyCode, std::function<void()> func);
    
        private:
            
            void handle(sf::Event& event);

        private:
            std::map<sf::Mouse::Button, sf::Keyboard::Key, std::function<void()>> actionMap;

        public:
           void handleMouseClick(sf::Event& event);
           void handleKeyboardClick();
           void handleWiner(); 
    };
    
}