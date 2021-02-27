#include "Clicker.hpp"

#include <utility>
#include <iostream>

namespace carlos
{

    void Clicker::registerMapping(unsigned int i, std::function<void()> function,
                unsigned int keyCode, std::function<void()> func)
    {
        actionMap.insert({  });
        
    }

    Clicker::Clicker(ormaniec::WindowEventManager& windowEventManager)
    {
        windowEventManager.subscribe(sf::Event::KeyPressed, [&] (sf::Event& event) { handle(event); });
        windowEventManager.subscribe(sf::Event::MouseButtonPressed, [&] (sf::Event& event) { handle(event); });
    }    

    void handleKeyboardClick()
    {
        auto& keyCode = event.key.code;
        if(actionMap.contains(keyCode))
        {
            actionMap[keyCode]();
        }
    }
    
    void handleMouseClick(sf::Event& event)
    {
         auto& mouseButton = event.mouseButton.button;
            if(actionMap.contains(mouseButton))
            {
                actionMap[mouseButton]();
            }
    }

}



        // uerInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::Q, [&] { handle.KeyboardClick(); });
        // uerInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::E, [&] { handle.KeyboardClick(); });
        // uerInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Left, [&] { handle.MouseClick(); });
        // uerInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Right, [&] { handle.MouseClick(); });
        //sf::Event::MouseButtonPressed, [&] (sf::Event& event) { handle(event); }