#include "FocusInputMapper.hpp"

namespace carlos
{
    FocusInputMapper::FocusInputMapper(ormaniec::WindowEventManager& windowEventManager)
        : targetWindow(windowEventManager.getBoundWindow())
    {
        windowEventManager.subscribe(sf::Event::GainedFocus, [&](sf::Event& event){ handle( event ); });
        windowEventManager.subscribe(sf::Event::LostFocus, [&](sf::Event& event){ handle( event ); });
    }

    void FocusInputMapper::registerMapping(unsigned importance, std::function<void()> function)
    {
        actionMap.insert({importance, function});
    }
    void FocusInputMapper::handle(sf::Event& event)
    {
        auto& importance = event.type;
        if(actionMap.contains(importance))
        {
            actionMap[event.type]();
        }
    }
}