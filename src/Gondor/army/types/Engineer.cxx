//
// Created by lenovo on 11.07.2020.
//

#include "Engineer.hxx"

Engineer::Engineer (double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Engineer::MeleeDamage, 10.f}
        },
        {
                {Engineer::MeleeDamage, 1.f},
                {Engineer::FireDamage, 1.f},
                {Engineer::PiercingDamage, 1.f}
        })

{

}

double Engineer::getDamage()
{
    return Engineer::getDamage() * 2;
}
std::string Engineer::toString()
{
    return "Engineer";
}
std::string Engineer::victorySpeech()
{
    return "OW!";
}
std::string Engineer::defeatSpeech()
{
    return "Aaaaa!";
}