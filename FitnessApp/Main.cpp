#include <iostream>
#include <vector>
#include "User.h"
#include "Workout.h"
#include "CardioExercise.h"
#include "StrengthExercise.h"
#include "WeightLossGoal.h"
#include "ActivityLogger.h"

int main() {
    // Vytvoříme uživatele
    User* user = new User();

    // Přidáme několik tréninků (Workout)
    for (int i = 0; i < 5; ++i) {
        IWorkout* workout = new Workout();

        // Přidáme cvičení (Cardio a Strength)
        workout->addExercise(new CardioExercise(20 + i * 5));     // 20, 25, 30...
        workout->addExercise(new StrengthExercise(50 + i * 10));  // 50, 60, 70...

        // Přidáme k uživateli
        user->addWorkout(workout);

        // Zapíšeme log
        ActivityLogger::logWorkout(workout);
    }

    // Vytvoříme a přidáme cíl uživatele
    IFitnessGoal* goal = new WeightLossGoal(85.0, 75.0);
    user->addGoal(goal);

    // Ukázka statické proměnné
    std::cout << "Total Workouts Created: " << Workout::getWorkoutCount() << std::endl;

    // Ukázka polymorfismu — všechna cvičení přes IE
    std::vector<IExercise*> exerciseList;
    exerciseList.push_back(new CardioExercise(15));
    exerciseList.push_back(new StrengthExercise(40));

    std::cout << "\n[Polymorphic Exercise Collection Output]\n";
    for (auto ex : exerciseList) {
        std::cout << ex->getName() << " burned " << ex->getCaloriesBurned() << " calories.\n";
        delete ex;
    }

    // Ukázka cíle
    std::cout << "\n[Goal Progress]\n";
    std::cout << "Progress: " << goal->calculateProgress() * 100 << "%\n";
    std::cout << "Goal achieved? " << (static_cast<WeightLossGoal*>(goal)->isAchieved() ? "Yes" : "No") << std::endl;

    // Čistíme zdroje
    delete user;

    return 0;
}