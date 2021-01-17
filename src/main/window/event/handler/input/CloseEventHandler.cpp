#include "CloseEventHandler.hpp"
#include <iostream>

namespace carlos
{
    CloseEventHandler::CloseEventHandler(sf::RenderWindow& lwindow)
        : window(lwindow)
    {
    
    }
    void CloseEventHandler::handle(sf::Event& event)
    {
        window.close();
    } 

} 