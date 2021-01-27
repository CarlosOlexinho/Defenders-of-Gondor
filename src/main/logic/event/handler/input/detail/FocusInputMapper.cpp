#include "FocusInputMapper.hpp"

namespace carlos
{
    FocusInputMapper::FocusInputMapper(ormaniec::WindowEventManager& windowEventManager)
        : targetWindow(windowEventManager.getBoundWindow())
    {
        windowEventManager.subscribe(sf::Event::GainedFocus, [&](sf::Event& event){ handle( event ); });
    }

    void FocusInputMapper::registerMapping(unsigned importance, std::function<void()> function)
    {
        actionMap.insert({importance, function});
    }
    void FocusInputMapper::handle(sf::Event& event)
    {
        bool WINDOW_HAS_FOCUS = false;

        if ( event.type == sf::Event::GainedFocus )
        {
            WINDOW_HAS_FOCUS = true;
            
        }

        else if ( event.type == sf::Event::LostFocus )
        {
            WINDOW_HAS_FOCUS = false;
        }
    }
}