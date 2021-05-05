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

//        userInputMapperPtr->getResizeMapper().registerMapping(sf::Event::Resized, []
//        {
//            std::cout << "And now, window can be resized!" << std::endl;
//        });
        
        userInputMapperPtr->getCloseMapper().registerMapping(0, []
        {
            std::cout << "Thank you very much for using our application!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        });
        userInputMapperPtr->getCloseMapper().registerMapping(1, []
        {
            std::cout << "Closing..." << std::endl;
        });

        clickerPtr = std::make_unique<carlos::Clicker> (userInputMapperPtr);

    }

    void Game::start()
    {
        renderWindow.setFramerateLimit(15);
        while(renderWindow.isOpen())
        {
            gameLoop();
        }
    }

    void Game::gameLoop()
    {
        sf::Sprite background;
        sf::Texture texture;
        sf::Event event;

        while(renderWindow.pollEvent(event))
        {
            windowEventManagerPtr->receive(event);

            if (event.type == sf::Event::Resized)
            {
                std::cout << "new width: " << event.size.width << std::endl;
                std::cout << "new height: " << event.size.height << std::endl;
            }
        }

        renderWindow.clear();
        renderWindow.draw(background);
        renderWindow.display();
    }
}  