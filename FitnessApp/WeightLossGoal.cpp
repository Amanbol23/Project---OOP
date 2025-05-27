#include "WeightLossGoal.h"

WeightLossGoal::WeightLossGoal(double current, double target)
    : currentWeight(current), targetWeight(target) {
}

double WeightLossGoal::calculateProgress()  {
    if (currentWeight <= targetWeight) return 1.0;
    
    double lost = currentWeight - targetWeight;
    double total = currentWeight - targetWeight;
    
    return (lost / total);
}

bool WeightLossGoal::isAchieved()  {
    return currentWeight <= targetWeight;
}
