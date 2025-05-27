#pragma once

#include <string>
#include <iostream>

using namespace std;

class IExercise {
public:
    virtual ~IExercise() = default;
    virtual string getName() = 0;
    virtual int getCaloriesBurned() = 0;
};