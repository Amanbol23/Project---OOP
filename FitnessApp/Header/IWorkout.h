#pragma once

#include <vector>
#include "IExercise.h"

using namespace std;

class IWorkout {
public:
    virtual void addExercise(IExercise* ex) = 0;
    virtual vector<IExercise*> getExercises()  = 0;
    virtual ~IWorkout() = default;
};