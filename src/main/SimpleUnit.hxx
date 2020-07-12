//
// Created by lenovo on 11.07.2020.
//

#ifndef RTS_SIMPLEUNIT_HXX
#define RTS_SIMPLEUNIT_HXX

#include <string>
#include <map>
#include "../interface/IUnit.hxx"

class SimpleUnit
        : public IUnit
{
protected:
    double     health;
    double     damage;
    double     penetration;
    DamageType damageType;

    std::map<DamageType, double> resistanceMapping;

public:
    SimpleUnit(double health
            , double damage
            , double penetration
            , DamageType damageType
            , std::map<DamageType, double> resistanceMapping);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;
    double getDamage() override;
    double getPenetration() override;
    DamageType getDamageType() override;
    double getHealth() override;
    //double maxAvaiableHealth() override;


    std::string toString() override;
};


#endif //RTS_SIMPLEUNIT_HXX
