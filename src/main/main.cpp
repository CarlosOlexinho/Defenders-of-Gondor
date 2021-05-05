   #include <iostream>

#include "Game.hpp"

#include <thread>

int main()
{
    ormaniec::Game defendersOfGondor;

    defendersOfGondor.start();

    return EXIT_SUCCESS;
}