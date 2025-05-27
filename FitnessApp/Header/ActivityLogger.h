#pragma once

#include "IWorkout.h"
#include <iostream>

class ActivityLogger 
{
public:
    static void logWorkout(IWorkout* workout);

};