//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file KeyboardInputHandler.hpp
 */
#pragma once

#include <logic/event/handler/input/IInputMapper.hpp>
#include <memory>
#include <window/event/handler/IEventHandler.hpp>

namespace ormaniec
{
    class KeyboardInputMapper
        : public IInputMapper
    {
    public:
        KeyboardInputMapper(std::shared_ptr<IEventHandler>  keyboardEventHandler);
        void registerMapping(unsigned int i, std::function<void()> func) override;

    private:
        std::shared_ptr<IEventHandler> keyboardEventHandler;
    };
}


