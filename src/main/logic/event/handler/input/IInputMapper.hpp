//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file IInputMapper.hpp.h
 */
#pragma once

#include <functional>

namespace ormaniec
{
    struct IInputMapper
    {
        virtual void registerMapping(unsigned, std::function<void(void*)>) = 0;

        ~IInputMapper() = default;
    };
}


