//
// Created by lenovo on 11.07.2020.
//

#include "Archer.hxx"

Archer::Archer(double maxHealth, double Damage, double Penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Archer::MeleeDamage, 5.f},
                {Archer::FireDamage,     15.f},
                {Archer::PiercingDamage, 10.f}
        }, {
                {Archer::MeleeDamage, 2.f},
                {Archer::FireDamage,     2.f},
                {Archer::PiercingDamage, 2.f},
                {Archer::ChargeDamage, 2.f}
        })
{

}

double Archer::getDamage() {
    return Human::getDamage() * 2;
}

std::string Archer::toString() {
    return "Archer";
}

std::string Archer::victorySpeech() {
    return "For Gondor!";
}

std::string Archer::defeatSpeech() {
    return "Aaaaa!";
}