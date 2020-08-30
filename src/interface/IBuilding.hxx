//
// Created by lenovo on 22.08.2020.
//

#ifndef RTS_IBUILDING_HXX
#define RTS_IBUILDING_HXX

#include<string>
#include "IUnit.hxx"

struct IBuilding
{

    enum buildingDamageType
    {
        FireDamage,
        PiercingDamage,
    };

    virtual ~IBuilding() = default;

    virtual double duration() = 0;
    virtual double getDamage() = 0;
    virtual double getPenetration() = 0;
    virtual void takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType) = 0;
    virtual buildingDamageType getDamageType() = 0;
    virtual double getDuration() = 0;
    virtual double getGold() = 0;

    virtual std::string toString() = 0;
    // virtual std::string buildingSound() = 0;

};

#endif //RTS_IBUILDING_HXX
