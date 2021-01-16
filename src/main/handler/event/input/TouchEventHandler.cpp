#include "TouchEventHandler.hpp"
#include <iostream>

namespace carlos
{
    void TouchEventHandler::handle(sf::Event& event)
    {   
      if ( event.type == sf::Event::TouchBegan)
        {
           std::cout << "You've touched the touchpad!" << event.TouchBegan << std::endl;
        }
      else if ( event.type == sf::Event::TouchMoved)
        {
           std::cout << "You've made a move on the touchpad!" << event.TouchMoved << std::endl;
        }
      else if ( event.type == sf::Event::TouchEnded)
        {
            std::cout << "You've ended touching the touchpad!" << event.TouchEnded << std::endl;
        }
    }

}