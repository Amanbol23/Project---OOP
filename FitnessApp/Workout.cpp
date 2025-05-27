#include "Workout.h"
#include <iostream>

int Workout::workoutCount = 0;

Workout::Workout() {
	workoutCount++;
}

int Workout::getWorkoutCount() {
	return workoutCount;
}

void Workout::addExercise(IExercise* ex) {
    exercises.push_back(ex);
}

std::vector<IExercise*> Workout::getExercises()  {
    return exercises;
}

int Workout::calculateTotalCalories()  {
    int total = 0;
    for (auto ex : exercises) {
        total += ex->getCaloriesBurned();
    }
    return total;
}

Workout::~Workout() {
    for (auto ex : exercises) {
        delete ex;
    }
    
	Workout::workoutCount--;
	exercises.clear();
}
