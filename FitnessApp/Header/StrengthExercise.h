#pragma once

#include "IExercise.h"

class StrengthExercise : public IExercise {
private:
    int weight; // in kg
public:
    StrengthExercise(int weight);
    
    string getName() override;
    int getCaloriesBurned() override;
    int getWeight() ;
};
