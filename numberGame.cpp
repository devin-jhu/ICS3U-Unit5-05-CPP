// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The celcius to fahrenheit calculator

#include <iostream>
#include <string>


float fahrenheit() {
    // this function converts celsius to fahrenheit
    std::string celsiusString;
    float celsius;
    float fahrenheit;

    // input
    std::cout << "enter temperature (celcius): ";
    std::cin >> celsiusString;

    // process & output
    try {
        celsius = std::stoi(celsiusString);

        fahrenheit = ((9 * celsius) / 5) + 32;

        std::cout << "\n"<< celsius <<"°C is also "<< fahrenheit << "°F ";
    } catch (std::invalid_argument) {
    std::cout << "not a temperature" << std::endl;
    }
}

int main() {
    // this function calls the function

    // call conversion
    fahrenheit();
}
