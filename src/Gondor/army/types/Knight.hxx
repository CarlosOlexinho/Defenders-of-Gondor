//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_KNIGHT_HXX
#define RTS_KNIGHT_HXX

#include "../Human.hxx"

class Knight
    : public Human
    {
        public:
        Knight(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType);

        double getDamage() override;
        std::string toString() override;
        std::string victorySpeech();
        std::string defeatSpeech();
    };

#endif //RTS_KNIGHT_HXX
