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

        explicit UserInputMapper(WindowEventManager& windowEventManager);
    private:
        std::unique_ptr<IInputMapper> closeMapper;
        std::unique_ptr<IInputMapper> keyboardMapper;
        std::unique_ptr<IInputMapper> mouseMapper;
    };
}


