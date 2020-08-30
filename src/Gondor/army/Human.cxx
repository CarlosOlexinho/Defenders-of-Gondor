//
// Created by lenovo on 11.07.2020.
//

#include "Human.hxx"
#include <utility>

Human::Human(double maxHealth
        , double damage
        , double penetration
        , IUnit::DamageType damageType
        , std::map<DamageType, double> specialisation
        , std::map<DamageType, double> resistanceMapping)
        : SimpleUnit(maxHealth, damage, penetration, damageType, std::move(resistanceMapping))
{
    this->specialisation = std::move(specialisation);
}

std::string Human::toString()
{
    return "Human";
}
double Human::getDamage()
{
    return SimpleUnit::getDamage() * specialisation[damageType];
}