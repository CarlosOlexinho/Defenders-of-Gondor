#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <window/event/handler/WindowEventManager.hpp>

#include <logic/event/handler/input/IInputMapper.hpp>

namespace carlos
{
    class FocusInputMapper
        : public ormaniec::IInputMapper
    {
    public:
        explicit FocusInputMapper(ormaniec::WindowEventManager& windowEventManager);
        void registerMapping(unsigned int importance, std::function<void(void*)> function) override;

    private:
        void handle(sf::Event& event);

    private:
        std::map<unsigned, std::function<void(void*)> > actionMap;
        sf::RenderWindow& targetWindow;
    };
    
}