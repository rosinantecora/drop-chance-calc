//dropChanceCalculator.cpp
#include "header1.h"

double dropChanceCalc(double dropRate, int attempts) {
    double chance = 1 - pow(1 - dropRate, attempts);
    return chance;
}
