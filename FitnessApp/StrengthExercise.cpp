#include "StrengthExercise.h"

StrengthExercise::StrengthExercise(int weight) : weight(weight) {}

std::string StrengthExercise::getName() {
    return "Strength";
}

int StrengthExercise::getCaloriesBurned() {
    return weight * 2; 
}

int StrengthExercise::getWeight() {
    return weight;
}
