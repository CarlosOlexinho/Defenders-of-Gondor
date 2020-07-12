//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_SOLDIER_HXX
#define RTS_SOLDIER_HXX

#include "../Human.hxx"

class Soldier
    : public Human
    {
        public:
        Soldier(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType);

        double getDamage() override;
        std::string toString() override;
        std::string victorySpeech();
        std::string defeatSpeech();
    };


#endif //RTS_SOLDIER_HXX
