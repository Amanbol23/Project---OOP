#pragma once

#include "IFitnessGoal.h"

class WeightLossGoal : public IFitnessGoal {
private:
    double targetWeight;
    double currentWeight;

public:
    WeightLossGoal(double current, double target);
    
    double calculateProgress()  override;
    bool isAchieved();
};