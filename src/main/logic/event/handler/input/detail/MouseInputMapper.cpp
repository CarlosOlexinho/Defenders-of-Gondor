//
// Created by ormaniec on 17.01.2021.
//
/**
 * @file MouseInputMapper.cpp
 */

#include "MouseInputMapper.hpp"
#include <utility>

namespace ormaniec
{
    void MouseInputMapper::registerMapping(unsigned int i, std::function<void()> function)
    {
        mouseEventHandler->registerAction(i,function);
    }
    MouseInputMapper::MouseInputMapper(std::shared_ptr<IEventHandler>  mouseEventHandler)
        : mouseEventHandler(std::move(mouseEventHandler)) { }
}