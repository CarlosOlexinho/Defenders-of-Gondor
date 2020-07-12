//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_COMMANDER_HXX
#define RTS_COMMANDER_HXX

#include "../Human.hxx"

class Commander
    : public Human
    {
        public:
        Commander(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType);

        double getDamage() override;
        std::string toString() override;
        std::string victorySpeech();
        std::string defeatSpeech();
    };


#endif //RTS_COMMANDER_HXX
