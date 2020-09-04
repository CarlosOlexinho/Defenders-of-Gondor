//
// Created by lenovo on 22.08.2020.
//

#include "SimpleBuilding.hxx"
#include <iostream>

SimpleBuilding::SimpleBuilding(double maxDuration
        , double damage
        , double penetration
        , IBuilding::buildingDamageType buildingDamageType
        , std::map<buildingDamageType, double> resistanceMapping)
{
    this->durability = maxDurability;
    this->damage = damage;
    this->penetration = penetration;
    this->damageType = damageType;
    this->resistanceMapping = resistanceMapping;
}

void SimpleBuilding::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    std::cout << toString() << ", has received " << enemyDamage << " damage!" << std::endl;
    durability -= enemyDamage * (1-(resistanceMapping[attackDamageType] - enemyPenetration));
    std::cout << toString() << " has " << durability << " duration" << std::endl;
}
double SimpleBuilding::getDamage()
{
    return this -> damage;
}
double SimpleBuilding::getPenetration()
{
    return this -> penetration;
}
IBuilding::buildingDamageType SimpleBuilding::getBuildingDamageType()
{
    return this -> damageType;
}
double SimpleBuilding::getDurability()
{
    return this -> durability;
}
std::string SimpleBuilding::toString()
{
    return "SimpleBuilding";
}
double SimpleBuilding::getGold()
{
    return this -> gold;
}