//
// Created by lenovo on 02.09.2020.
//

#ifndef RTS_BUILDING_H
#define RTS_BUILDING_H

#include <map>
#include "../../main/SimpleBuilding.hxx"

class Building
        : public SimpleBuilding
{
    std::map<buildingDamageType, double>

public:
    Building(double maxDurability
            , double damage
            , double penetration
            , buildingDamageType damageType
            , std::map<buildingDamageType, double>
            , std::map<DamageType, double> resistanceMapping);

    ~Building override = default;

    double getBuildingDamage() override;

    std::string toString() override;
};


#endif //RTS_BUILDING_H
