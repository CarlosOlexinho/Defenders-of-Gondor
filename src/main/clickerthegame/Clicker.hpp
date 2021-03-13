#pragma once

#include <logic/event/handler/input/UserInputMapper.hpp>


namespace carlos
{
    class Clicker
    {
        public:
            Clicker();
            void setTargetCondition (unsigned count);
    
        private:
            unsigned target = 20;
            unsigned mouseClick = 0;
            unsigned keyboardClick = 0;

            std::shared_ptr<ormaniec::UserInputMapper> userInputMapperPtr;

        protected:
           void handleMouseClick();
           void handleKeyboardClick();
           void handleDraw();
           void handleEnd(); 
    };
    
}