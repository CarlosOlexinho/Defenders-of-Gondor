//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file UserInputMapper.hpp
 */
#pragma once

#include <window/event/handler/WindowEventManager.hpp>
#include "IInputMapper.hpp"

#include <memory>

namespace ormaniec
{
    struct UserInputMapper
    {
        IInputMapper& getKeyboardMapper();
        IInputMapper& getMouseMapper();
        IInputMapper& getCloseMapper();
        IInputMapper& getFocusMapper();
    

        UserInputMapper(WindowEventManager& windowEventManager);
    private:
        std::unique_ptr<IInputMapper> closeMapper; //pointer point at place in scope for IInputMapper and it's called closeMapper.
        std::unique_ptr<IInputMapper> keyboardMapper;
        std::unique_ptr<IInputMapper> mouseMapper;
        std::unique_ptr<IInputMapper> focusMapper;
    };
}


