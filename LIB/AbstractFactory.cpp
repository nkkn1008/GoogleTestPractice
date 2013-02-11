#include <iostream>
#include <string>
#include <vector>
#include "AbstractFactory.h"

// �I�u�W�F�N�g�w���̂������p.181���Q��
// ContinentFactory ->ResFactory
// LowResFact/HighResFact -> AfricaFactory, AmericaFactory
// main�ŗ��p����Animal World�N���X��Africa,America�̈Ⴂ��
// �ӎ�����K�v���Ȃ�

AnimalWorld::AnimalWorld(ContinentFactory* factory)
{
    herbivore_ = factory->CreateHerbivore();
    carnivore_ = factory->CreateCarnivore();
}

std::string AnimalWorld::RunFoodChain()
{
    return carnivore_->Eat(herbivore_);
}


