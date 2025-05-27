#include "User.h"

void User::addWorkout(IWorkout* workout) {
    workouts.push_back(workout);
}

void User::addGoal(IFitnessGoal* goal) {
    goals.push_back(goal);
}

User::~User() {
    for (auto w : workouts) {
        delete w;
    }
    for (auto g : goals) {
        delete g;
    }
}
