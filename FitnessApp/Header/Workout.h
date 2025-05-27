#pragma once

#include <vector>
#include "IWorkout.h"

using namespace std;

class Workout : public IWorkout
{
private:
    vector<IExercise*> exercises;
    static int workoutCount;

public:
	Workout();
    ~Workout();

    static int getWorkoutCount();

    void addExercise(IExercise* ex) override;
    vector<IExercise*> getExercises() override;
    
    int calculateTotalCalories();
};