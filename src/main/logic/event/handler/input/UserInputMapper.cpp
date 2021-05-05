//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file UserInputMapper.cpp
 */

#include <logic/event/handler/input/detail/CloseInputMapper.hpp>
#include "detail/KeyboardInputMapper.hpp"
#include "detail/MouseInputMapper.hpp"
#include "detail/FocusInputMapper.hpp"
#include "detail/ResizeInputMapper.hpp"

#include "UserInputMapper.hpp"

namespace ormaniec
{

    IInputMapper& UserInputMapper::getKeyboardMapper() { return *keyboardMapper; }
    IInputMapper& UserInputMapper::getMouseMapper()       { return *mouseMapper; }
    IInputMapper& UserInputMapper::getCloseMapper()       { return *closeMapper; }
    IInputMapper& UserInputMapper::getFocusMapper()       { return *focusMapper; }
    IInputMapper& UserInputMapper::getResizeMapper()     { return *resizeMapper; }

    UserInputMapper::UserInputMapper(WindowEventManager& windowEventManager)
        : closeMapper(new CloseInputMapper(windowEventManager)),
          keyboardMapper(new KeyboardInputMapper(windowEventManager)),
          mouseMapper(new MouseInputMapper(windowEventManager)),
          focusMapper(new carlos::FocusInputMapper(windowEventManager)),
          resizeMapper(new carlos::ResizeInputMapper(windowEventManager))
          { }

}