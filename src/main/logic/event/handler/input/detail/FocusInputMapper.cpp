#include "FocusInputMapper.hpp"

#include <iostream>
#include <ctime>
#include <unistd.h>

namespace carlos
{
    FocusInputMapper::FocusInputMapper(ormaniec::WindowEventManager& windowEventManager)
        : targetWindow(windowEventManager.getBoundWindow())
    {
        windowEventManager.subscribe(sf::Event::GainedFocus, [&](sf::Event& event){ handle( event ); });
        windowEventManager.subscribe(sf::Event::LostFocus, [&](sf::Event& event){ handle( event ); });
    }

    void FocusInputMapper::registerMapping(unsigned importance, std::function<void(void*)> function)
    {
        actionMap.insert({importance, function});
    }

    std::string gen_random(const int len) {

        std::string tmp_s;
        static const char alphanum[] =
                   "0123456789"
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                   "abcdefghijklmnopqrstuvwxyz";

        srand( (unsigned) time(NULL) * getpid());

        tmp_s.reserve(len);

        for (int i = 0; i < len; ++i)
            tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];


        return tmp_s;

    }

    void FocusInputMapper::handle(sf::Event& event)
    {
        auto& importance = event.type;
        std::string text = gen_random(rand() % 100);
        if(actionMap.contains(importance))
        {
            actionMap[event.type](&text);
        }
    }
}