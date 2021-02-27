//
// Created by ormaniec on 08.01.2021.
//
/**
 * @file Game.cpp
 */

#include <thread>
#include <iostream>


#include "Game.hpp"

namespace ormaniec
{
    Game::Game()
        : renderWindow(sf::VideoMode(800, 600), "SFML Window")
    {
        windowEventManagerPtr = std::make_unique<WindowEventManager>(renderWindow);
        userInputMapperPtr = std::make_unique<UserInputMapper>(*windowEventManagerPtr);

            userInputMapperPtr->getKeyboardMapper().registerMapping(sf::Keyboard::D,
            [](void* context){
                auto isPressed = *static_cast<bool*>(context);
                if( isPressed )
                    std::cout << "Pressed!" << std::endl;
                else
                    std::cout << "Released!" << std::endl;
            }),


        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Right, [](void*){ std::cout << "Yes, that's right. You've pressed right mouse button." << std::endl; });
        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Middle, [](void*){ std::cout << "Yes, that's right. You've pressed middle mouse button." << std::endl; });
        userInputMapperPtr->getMouseMapper().registerMapping(sf::Mouse::Left, [](void* context)
        {
            auto isPressed = *static_cast<bool*>(context);
            if(isPressed)
                std::cout << "Yes, that's right. You've pressed left mouse button." << std::endl;
            else
                std::cout << "You released left mouse button." << std::endl;
        });

        userInputMapperPtr->getFocusMapper().registerMapping(sf::Event::GainedFocus, [] (void* context){
            auto& text = *static_cast<std::string*>(context);
            std::cout << "Gained focus! Random string from generator: " << text << std::endl;
            if( text.find('0') != std::string::npos )
                std::cout << "Contains '0'" << std::endl;
            else
                std::cout << "DOES NOT contain '0'" << std::endl;
        });
        userInputMapperPtr->getFocusMapper().registerMapping(sf::Event::LostFocus, [] (void*){std::cout << "Lost focus!" << std::endl; });


        userInputMapperPtr->getCloseMapper().registerMapping(0, [] (void*)
        {
            std::cout << "Thank you very much for using our application!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        });
        userInputMapperPtr->getCloseMapper().registerMapping(1, [] (void*)
        {
            std::cout << "Closing..." << std::endl;
        });

        // userInputMapperPtr->getKeyboardMapper().registerMapping(sf::Keyboard::Q, [&]{
        //     Clicker::handleKeyboardClick();
        // });

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
        sf::Event event;
        while(renderWindow.pollEvent(event))
        {
            windowEventManagerPtr->receive(event);
        }

        renderWindow.clear();
        renderWindow.display();
    }

}