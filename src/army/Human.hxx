//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_HUMAN_HXX
#define RTS_HUMAN_HXX

#include <map>
#include "../main/SimpleUnit.hxx"

class Human
    : public SimpleUnit
    {
        std::map<DamageType, double> specialisation;

        public:
        Human(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType
                , std::map<DamageType, double> specialisation
                , std::map<DamageType, double> resistanceMapping);
        ~Human() override = default;

        double getDamage() override;

        std::string toString() override;
    };


#endif //RTS_HUMAN_HXX
