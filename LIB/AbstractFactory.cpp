#include <iostream>
#include <string>
#include <vector>
#include "AbstractFactory.h"

// オブジェクト指向のこころのp.181を参照
// ContinentFactory ->ResFactory
// LowResFact/HighResFact -> AfricaFactory, AmericaFactory
// mainで利用するAnimal WorldクラスはAfrica,Americaの違いを
// 意識する必要がない

AnimalWorld::AnimalWorld(ContinentFactory* factory)
{
    herbivore_ = factory->CreateHerbivore();
    carnivore_ = factory->CreateCarnivore();
}

std::string AnimalWorld::RunFoodChain()
{
    return carnivore_->Eat(herbivore_);
}


