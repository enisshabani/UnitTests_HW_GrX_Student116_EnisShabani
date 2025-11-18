#include "T02_CalculateShipping.h"

float CalculateShipping(float weight, float distance)
{
    if (weight <= 0 || distance <= 0)
        return -1;

    return weight * distance * 0.5f;
}
