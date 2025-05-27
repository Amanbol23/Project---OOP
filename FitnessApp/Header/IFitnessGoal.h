#pragma once

#include <string>

class IFitnessGoal 
{
public:
    virtual ~IFitnessGoal() = default;
    virtual double calculateProgress()  = 0;
};