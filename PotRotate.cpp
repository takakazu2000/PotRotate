#include "PotRotate.hpp"
#include <math.h>
#include <stdio.h>

void potrotation(float* x, float* y, float rotation)
{
    *x = *x + r * cos(rotation);
    *y = *y + r * sin(rotation);
}