// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop adder

#include <iostream>
#include <random>

int main() {
    // this function finds the average of 10 random numbers

    int numberArray[10];
    int randomNumber;
    float average;

    // random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne twister
    std::uniform_int_distribution<int> idist(0, 100);  // random from 0 - 100

    std::cout << "The random number average finder" << std::endl;

    // process and output
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        numberArray[counter] = randomNumber;
        std::cout << "Random number: " << randomNumber << std::endl;
    }

    average = std::accumulate(std::begin(numberArray), std::end(numberArray),
        0, std::plus<int>());
    average /= 10;

    std::cout << "\nThe average is " << average << "." << std::endl;

    std::cout << "\nDone." << std::endl;
}
