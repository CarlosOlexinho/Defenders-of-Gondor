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
        if( event.type == sf::Event::GainedFocus )
        {
            WINDOW_HAS_FOCUS = true;
            std::cout << "Gain focus!" << std::endl;
            window.display();
        }
        else if ( event.type == sf::Event::LostFocus )
        {
            WINDOW_HAS_FOCUS = false;
            std::cout << "Lost focus!" << std::endl;
            window.clear();
        }
    }
}
