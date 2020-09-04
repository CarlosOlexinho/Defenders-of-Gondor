//
// Created by lenovo on 11.07.2020.
//

#include "Commander.hxx"

Commander::Commander(double maxHealth, double Damage, double Penetration, IUnit::DamageType damageType)
        : Human(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Commander::MeleeDamage, 15.f},
                {Commander::FireDamage, 15.f}
        },
        {
                {Commander::MeleeDamage, 1.f},
                {Commander::FireDamage, 1.f}
        })

{

}

double Commander::getDamage()
{
    return Human::getDamage() * 2;
}
std::string Commander::toString()
{
    return "Commander";
}
std::string Commander::victorySpeech()
{
    return "For Gondor!";
}
std::string Commander::defeatSpeech()
{
    return "Retreat!";
}