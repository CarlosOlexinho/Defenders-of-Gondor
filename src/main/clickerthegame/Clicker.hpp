#pragma once

#include <logic/event/handler/input/UserInputMapper.hpp>


namespace carlos
{
    class Clicker
    {
        public:
            Clicker(std::unique_ptr<ormaniec::UserInputMapper>& userInputMapperPtr);
            void setTargetCondition (unsigned count);
    
        private:
            unsigned target = 20;
            unsigned mouseClick = 0;
            unsigned keyboardClick = 0;

        protected:
           void handleMouseClick();
           void handleKeyboardClick();
           void handleEnd();
    };
    
}