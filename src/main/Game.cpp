//
//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp
 */


#include <thread>
#include <iostream>

#include <SFML/Graphics.hpp>

#include "Game.hpp"


namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window")
    {
        windowEventManagerPtr = std::make_unique<WindowEventManager>(renderWindow);
        userInputMapperPtr = std::make_unique<UserInputMapper>(*windowEventManagerPtr);

        userInputMapperPtr->getKeyboardMapper().registerMapping(sf::Keyboard::D, []{ std::cout << "You are pressing D." << std::endl; }),
            
        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Right, []{ std::cout << "Yes, that's right. You've pressed right mouse button." << std::endl; });
        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Middle, []{ std::cout << "Yes, that's right. You've pressed middle mouse button." << std::endl; });
        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Left, []{ std::cout << "Yes, that's right. You've pressed left mouse button." << std::endl; });
        
        userInputMapperPtr->getFocusMapper().registerMapping(sf::Event::GainedFocus, [] {std::cout << "Gained focus!" << std::endl; });
        userInputMapperPtr->getFocusMapper().registerMapping(sf::Event::LostFocus, [] {std::cout << "Lost focus!" << std::endl; });
        
        userInputMapperPtr->getCloseMapper().registerMapping(0, []
        {
            std::cout << "Thank you very much for using our application!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        });
        userInputMapperPtr->getCloseMapper().registerMapping(1, []
        {
            std::cout << "Closing..." << std::endl;
        });
    }

    void Game::start()
    {
        renderWindow.setFramerateLimit(60);
        while(renderWindow.isOpen())
        {
            gameLoop();
        }
    }

    void Game::gameLoop()
    {
        sf::Event           event{};
        static bool         pressed = false;
        static sf::Vector2f start   = {-1, -1};
        static sf::Vector2f end     = {-1, -1};
        sf::RectangleShape  rect;

        while(renderWindow.pollEvent(event))
        {
            windowEventManagerPtr->receive(event);

            if( event.type == sf::Event::Resized)
            {
                sf::Vector2f size = static_cast<sf::Vector2f>(renderWindow.getSize());
                auto GUIView = sf::View(sf::FloatRect(0.f, 0.f, size.x, size.y));
                renderWindow.setView(GUIView);
            }

            if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left)
            {
                pressed = true;
                if(start == sf::Vector2f{-1, -1})
                {
                    start = sf::Vector2f(sf::Mouse::getPosition(renderWindow));
                }
            }
            else if(event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Button::Left)
            {
                pressed = false;
                start   = {-1, -1};
            }
        }
        if(pressed)
        {
            sf::Mouse::getPosition();
            end = sf::Vector2f(sf::Mouse::getPosition(renderWindow));
        }
        renderWindow.clear();

        if(start != sf::Vector2f{-1, -1} && end != sf::Vector2f{-1, -1})
        {
            rect.setPosition(start);
            rect.setOutlineThickness(1);
            rect.setOutlineColor(sf::Color::Green);
            rect.setFillColor(sf::Color::Transparent);

            rect.setSize(
                {
                    end.x - start.x,
                    end.y - start.y
                });
            renderWindow.draw(rect);
        }

        renderWindow.display();
    }
}  