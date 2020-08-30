//
// Created by lenovo on 11.07.2020.
//

#include "Knight.hxx"

Knight::Knight(double maxHealth, double Damage, double Penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Knight::PhysicalDamage, 10.f},
                {Knight::FireDamage,     15.f}
        }, {
                {Knight::PhysicalDamage, 1.f},
                {Knight::FireDamage,     1.f}
        })
{

}

double Knight::getDamage() {
    return Human::getDamage() * 2;
}

std::string Knight::toString() {
    return "Knight";
}

std::string Knight::victorySpeech() {
    return "For Gondor!";
}

std::string Knight::defeatSpeech() {
    return "Aaaaa!";
}