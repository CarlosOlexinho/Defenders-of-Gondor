//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file UserInputMapper.hpp
 */
#pragma once

#include "IInputMapper.hpp"

#include <memory>

namespace ormaniec
{
    struct UserInputMapper
    {
        IInputMapper& getKeyboardMapper();
        IInputMapper& getMouseMapper();

        UserInputMapper(
            std::shared_ptr<IEventHandler> keyboardEventHandler,
            std::shared_ptr<IEventHandler> mouseEventHandler
        );
    private:
        std::unique_ptr<IInputMapper> keyboardMapper;
        std::unique_ptr<IInputMapper> mouseMapper;
    };
}


