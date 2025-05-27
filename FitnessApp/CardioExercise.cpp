#include "CardioExercise.h"

using namespace std;

CardioExercise::CardioExercise(int duration) : duration(duration) {};

string CardioExercise::getName() {
	return "Cardio Exercise";
}

int CardioExercise::getCaloriesBurned() {
	return duration * 10; // Assuming 10 calories burned per minute
}

int CardioExercise::getDuration() {
	return duration;
}



