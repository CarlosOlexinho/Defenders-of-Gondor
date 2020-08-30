//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_IUNIT_HXX
#define RTS_IUNIT_HXX
#include <string>
#include "IBuilding.hxx"

struct IUnit
{
    enum DamageType
    {
        PhysicalDamage,
        FireDamage,
    };

    virtual ~IUnit() = default;

    virtual void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) = 0;
    virtual double getDamage() = 0;
    virtual double getPenetration() = 0;
    virtual DamageType getDamageType() = 0;
    virtual double getHealth() = 0;
    //virtual double maxAvailableHealth();

    virtual std::string toString() = 0;
    virtual std::string victorySpeech() = 0;
    virtual std::string defeatSpeech() = 0;
};

#endif //RTS_IUNIT_HXX
