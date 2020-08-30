//
// Created by lenovo on 22.08.2020.
//

#include "SimpleBuilding.hxx"
#include <iostream>

SimpleBuilding::SimpleBuilding(double maxDuration
        , double damage
        , double penetration
        , IBuilding::buildingDamageType damageType
        , std::map<buildingDamageType, double> resistanceMapping)
{
    this->duration = maxDuration;
    this->damage = damage;
    this->penetration = penetration;
    this->damageType = damageType;
    this->resistanceMapping = resistanceMapping;
}

void SimpleBuilding::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    std::cout << toString() << ", has received " << enemyDamage << " damage!" << std::endl;
    duration -= enemyDamage * (1-(resistanceMapping[attackDamageType] - enemyPenetration));
    std::cout << toString() << " has " << duration << " duration" << std::endl;
}
