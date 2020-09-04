//
// Created by lenovo on 02.09.2020.
//

#include "Building.hxx"
#include <utility>

Building::Building(double maxDurability
, double damage
, double penetration
, IBuilding::buildingDamageType
, std::map<buildingDamageType, double> specialisation
, std::map<DamageType, double> resistanceMapping)
: SimpleBuilding(maxDurability, damage, penetration, buildingDamageType, resistanceMapping)

std::string Building::toString()
{
    return "Building";
}

double Building::getDamage()
{
    return SimpleBuilding::getDamage() * specialisation[buildingDamageType];
}