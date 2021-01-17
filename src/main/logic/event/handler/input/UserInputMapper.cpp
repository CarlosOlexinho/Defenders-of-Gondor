//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file UserInputMapper.cpp
 */

#include "detail/KeyboardInputMapper.hpp"
#include "detail/MouseInputMapper.hpp"

#include "UserInputMapper.hpp"

namespace ormaniec
{

    IInputMapper& UserInputMapper::getKeyboardMapper() { return *keyboardMapper; }
    UserInputMapper::UserInputMapper(std::shared_ptr<IEventHandler> keyboardEventHandler)
        : keyboardMapper(new KeyboardInputMapper(keyboardEventHandler))
    {

    }
    // IInputMapper& UserInputMapper::getMouseMapper() { return *mouseMapper; }

}