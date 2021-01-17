//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.hpp
 */
#pragma once

#include <logic/event/handler/input/IInputMapper.hpp>

namespace ormaniec
{
    class MouseInputMapper
        : public IInputMapper
    {
    public:
        void registerMapping(unsigned int i, std::function<void()> function) override;
    };
}


