//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_ENGINEER_HXX
#define RTS_ENGINEER_HXX


#include "../Human.hxx"

class Engineer
    : public Human
    {
        public:
        Engineer(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType);

        double getDamage() override;
        std::string toString() override;
        std::string victorySpeech();
        std::string defeatSpeech();
    };



#endif //RTS_ENGINEER_HXX
