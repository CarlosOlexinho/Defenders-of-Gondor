//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_ARCHER_HXX
#define RTS_ARCHER_HXX

#include "../Human.hxx"
#include <string>

class Archer
        : public Human
{
public:
    Archer(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType);

    double getDamage() override;
    std::string toString() override;
    std::string victorySpeech();
    std::string defeatSpeech();
};


#endif //RTS_ARCHER_HXX
