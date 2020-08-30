//
// Created by lenovo on 22.08.2020.
//

#ifndef RTS_SIMPLEBUILDING_HXX
#define RTS_SIMPLEBUILDING_HXX

#include <string>
#include <map>
#include "../interface/IBuilding.hxx"

class SimpleBuilding
        : public IBuilding
{
protected:
    double duration;
    double damage;
    double penetration;
    buildingDamageType damageType;

    std::map<buildingDamageType, double> resistanceMapping;

public:


    SimpleBuilding(double duration
            , double damage
            , double penetration
            , buildingDamageType damageType
            , std::map<buildingDamageType, double> resistanceMapping);

    void takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType) override;
    double getDamage() override;
    double getPenetration() override;
    buildingDamageType getDamageType() override;
    double getDuration() override;
    double getGold() override;

    std::string toString() override;
};


#endif //RTS_SIMPLEBUILDING_HXX
