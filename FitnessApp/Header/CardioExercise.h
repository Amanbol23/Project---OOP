#pragma once

#include "IExercise.h"

using namespace std;

class CardioExercise : public IExercise 
{
private:
	int duration; // in minutes

public:
    CardioExercise(int duration);
    
    string getName() override;
    int getCaloriesBurned() override;
    int getDuration();
};