#include "Clicker.hpp"

#include <iostream>

namespace carlos
{
// std::shared_ptr<ormaniec::UserInputMapper> userInputMapperPtr
    Clicker::Clicker (std::unique_ptr<ormaniec::UserInputMapper>& userInputMapperPtr)
    {
        userInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::Q, [&] { handleKeyboardClick(); });
        userInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::E, [&] { handleKeyboardClick(); });

        userInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Left, [&] { handleMouseClick(); });
        userInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Right, [&] { handleMouseClick(); });

        userInputMapperPtr -> getCloseMapper().registerMapping(9999, [&]{ handleEnd(); });
    }

void Clicker::handleMouseClick()
    {
         if(++mouseClick == target)
        {
            std::cout << "Mouse won!" << std::endl;
        }
    }    

void Clicker::handleKeyboardClick()
    {
        if(++keyboardClick == target)
        {
            std::cout << "Keyboard won!" << std::endl;
        }
    }

void Clicker::handleDraw()
{

     if(mouseClick == target && keyboardClick == target)
        {
            std::cout << "It's draw!" << std::endl;
        }

}    

void Clicker::handleEnd()
    {
        std::cout << "Results: " << std::endl;
        std::cout << "Mouse clicks: " << mouseClick << std::endl;
        std::cout << "Keyboard clicks: " << keyboardClick << std::endl;
    }
}
//     void handleKeyboardClick()
//     {
//         auto& keyCode = event.key.code;
//         if(actionMap.contains(keyCode))
//         {
//             actionMap[keyCode]();
//         }
//     }
    
//     void handleMouseClick(sf::Event& event)
//     {
//          auto& mouseButton = event.mouseButton.button;
//             if(actionMap.contains(mouseButton))
//             {
//                 actionMap[mouseButton]();
//             }
//     }

// }



        // uerInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::Q, [&] { handle.KeyboardClick(); });
        // uerInputMapperPtr -> getKeyboardMapper().registerMapping(sf::Keyboard::E, [&] { handle.KeyboardClick(); });
        // uerInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Left, [&] { handle.MouseClick(); });
        // uerInputMapperPtr -> getMouseMapper().registerMapping(sf::Mouse::Right, [&] { handle.MouseClick(); });
        //sf::Event::MouseButtonPressed, [&] (sf::Event& event) { handle(event); }