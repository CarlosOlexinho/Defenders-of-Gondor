//
// Created by lenovo on 11.07.2020.
//

#include "Pikeman.hxx"

Pikeman::Pikeman (double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Pikeman::MeleeDamage, 10.f},
                {Pikeman::FireDamage, 15.f}
        },{
                {Pikeman::MeleeDamage, 1.f},
                {Pikeman::FireDamage, 1.f},
                {Pikeman::PiercingDamage, 1.f},
                {Pikeman::ChargeDamage, 1.f}
        })

{

}

double Pikeman::getDamage()
{
    return Human::getDamage() * 2;
}
std::string Pikeman::toString()
{
    return "Pikeman";
}
std::string Pikeman::victorySpeech()
{
    return "For Gondor!";
}
std::string Pikeman::defeatSpeech()
{
    return "Aaaaa!";
}