//
// Created by lenovo on 11.07.2020.
//

#include "Archer.hxx"

Archer::Archer (double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
: Human(
maxHealth,
damage,
penetration,
damageType,
{
{Archer::PhysicalDamage, 10.f},
{Archer::FireDamage, 15.f}
},{
{Archer::PhysicalDamage, 1.f},
{Archer::FireDamage, 1.f}
})

{

}

double Archer::getDamage()
{
    return Human::getDamage() * 2;
}
std::string Archer::toString()
{
    return "Archer";
}
std::string Archer::victorySpeech()
{
    return "For Gondor!";
}
std::string Archer::defeatSpeech()
{
    return "Aaaaa!";
}