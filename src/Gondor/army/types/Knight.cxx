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
                {Knight::MeleeDamage, 10.f},
                {Knight::ChargeDamage, 20.f}
        }, {
                {Knight::MeleeDamage, 1.f},
                {Knight::FireDamage,     1.f},
                {Knight::PiercingDamage, 1.f},
                {Knight::ChargeDamage, 1.f}
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