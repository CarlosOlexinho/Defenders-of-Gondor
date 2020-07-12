//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_PIKEMAN_HXX
#define RTS_PIKEMAN_HXX

#include "../Human.hxx"

class Pikeman
    : public Human
    {
        public:
        Pikeman(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType);

        double getDamage() override;
        std::string toString() override;
        std::string victorySpeech();
        std::string defeatSpeech();
    };


#endif //RTS_PIKEMAN_HXX
