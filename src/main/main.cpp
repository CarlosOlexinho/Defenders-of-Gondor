#include <iostream>

#include "Game.hpp"

#include <thread>

int main()
{
    ormaniec::Game defendersOfGondor;
    ormaniec::Game defendersOfMordor;


    std::thread thread_1( &ormaniec::Game::start, &defendersOfGondor );
    std::thread thread_2( &ormaniec::Game::start, &defendersOfMordor );

    thread_1.join();
    thread_2.join();


    return EXIT_SUCCESS;
}