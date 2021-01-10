#include "FocusEventHandler.hpp"
#include <iostream>

namespace carlos
{
    FocusEventHandler::FocusEventHandler(sf::RenderWindow& lwindow)
        : window(lwindow)
    {

    }
    void FocusEventHandler::handle(sf::Event& event)
    {
        std::cout << "FocusEventHandler reporting, \t\t";
        if( event.type == sf::Event::GainedFocus )
        {
            std::cout << "You are focused on this window!" << std::endl;
        }
        else if ( event.type == sf::Event::LostFocus )
        {
            std::cout << "You are focused on another window!" << std::endl;
        }
    }
}
