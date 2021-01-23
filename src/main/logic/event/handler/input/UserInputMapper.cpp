//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file UserInputMapper.cpp
 */

#include <logic/event/handler/input/detail/CloseInputMapper.hpp>
#include "detail/KeyboardInputMapper.hpp"
#include "detail/MouseInputMapper.hpp"

#include "UserInputMapper.hpp"

namespace ormaniec
{

    IInputMapper& UserInputMapper::getKeyboardMapper() { return *keyboardMapper; }
    IInputMapper& UserInputMapper::getMouseMapper() { return *mouseMapper; }
    IInputMapper& UserInputMapper::getCloseMapper() { return *closeMapper; }

    UserInputMapper::UserInputMapper(WindowEventManager& windowEventManager)
        : closeMapper(new CloseInputMapper(windowEventManager)),
          keyboardMapper(new KeyboardInputMapper(windowEventManager)),
          mouseMapper(new MouseInputMapper(windowEventManager)) { }

}