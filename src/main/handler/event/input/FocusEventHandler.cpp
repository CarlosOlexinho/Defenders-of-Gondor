#include "FocusEventHandler.hpp"
#include <iostream>

namespace carlos
{
    bool WINDOW_HAS_FOCUS = false;
    FocusEventHandler::FocusEventHandler(sf::RenderWindow& lwindow)
        : window(lwindow)
    {

    }
    void FocusEventHandler::handle(sf::Event& event)
    {
        std::cout << "FocusEventHandler reporting, \t\t";
        if( event.type == sf::Event::GainedFocus )
        {
                WINDOW_HAS_FOCUS = true;
            std::cout << "You are focused on this window!" << std::endl;
        }
        else if ( event.type == sf::Event::LostFocus )
        {
                WINDOW_HAS_FOCUS = false;
            std::cout << "You are focused on another window!" << std::endl;
        }
    }
}
