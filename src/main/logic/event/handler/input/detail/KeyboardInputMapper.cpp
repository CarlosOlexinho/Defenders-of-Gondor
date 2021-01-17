//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file KeyboardInputHandler.cpp
 */

#include "KeyboardInputMapper.hpp"

#include <utility>

namespace ormaniec
{
    void KeyboardInputMapper::registerMapping(unsigned int i, std::function<void()> func)
    {
        keyboardEventHandler->registerAction(i,func);
    }
    KeyboardInputMapper::KeyboardInputMapper(std::shared_ptr<IEventHandler>  keyboardEventHandler)
        : keyboardEventHandler(std::move(keyboardEventHandler)) { }
}