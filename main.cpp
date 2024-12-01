//main.cpp
#include <iostream>
#include "header1.h"
using namespace std;

int main() {
    double dropRate;
    int attempts;

    cout << "Enter the drop rate: ";
    cin >> dropRate;
    dropRate = dropRate/100;

    cout << "Enter the number of attempts: ";
    cin >> attempts;

    double chance = dropChanceCalc(dropRate, attempts); //calc means calculator, chat. i'm just using slang
    cout << "The chance of getting the drop in " << attempts << " attempts is: " << chance * 100 << "%" << endl;

    return 0;
}
