//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.hpp
 */
#pragma once

#include <logic/event/handler/input/IInputMapper.hpp>
#include <memory>
#include <window/event/handler/IEventHandler.hpp>

namespace ormaniec
{
    class MouseInputMapper
        : public IInputMapper
    {
    public:
        MouseInputMapper(std::shared_ptr<IEventHandler>  keyboardEventHandler);
        void registerMapping(unsigned int i, std::function<void()> function) override;

    private:
        std::shared_ptr<IEventHandler> mouseEventHandler;
    };
}


