#pragma once

#include "IWorkout.h" 
#include "IFitnessGoal.h"
#include <vector>

using namespace std;

class User {
   vector<IWorkout*> workouts;
   vector<IFitnessGoal*> goals;
public:
   ~User();

   void addWorkout(IWorkout* workout);
   void addGoal(IFitnessGoal* goal);
};