//
// Created by lenovo on 11.07.2020.
//

#include "Soldier.hxx"

Soldier::Soldier (double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Soldier::MeleeDamage, 10.f},
                {Soldier::FireDamage, 15.f}
        },{
                {Soldier::MeleeDamage, 1.f},
                {Soldier::FireDamage, 1.f},
                {Soldier::PiercingDamage, 1.f},
                {Soldier::ChargeDamage, 1.f}
        })

{

}

double Soldier::getDamage()
{
    return Human::getDamage() * 2;
}
std::string Soldier::toString()
{
    return "Soldier";
}
std::string Soldier::victorySpeech()
{
    return "For Gondor!";
}
std::string Soldier::defeatSpeech()
{
    return "Aaaaa!";
}