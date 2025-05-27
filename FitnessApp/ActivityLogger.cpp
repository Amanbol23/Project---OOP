#include "ActivityLogger.h"

using namespace std;

void ActivityLogger::logWorkout(IWorkout* workout) {
    std::cout << "Workout Log:\n";

    for (auto ex : workout->getExercises()) {
        std::cout << "- " << ex->getName()
            << ": " << ex->getCaloriesBurned()
            << " calories burned.\n";
    }
    
    std::cout << "------------------------\n";
}
