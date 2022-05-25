// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop adder

#include <iostream>
#include <cmath>
#include <algorithm>

std::string postalAddressFunction(
    std::string name,
    std::string streetNumber,
    std::string street,
    std::string city,
    std::string province,
    std::string postalCode,
    std::string apartmentNumber = ""
    ) {
    // this function formats the postal address
    std::string postalAddress;

    // process
    if (apartmentNumber != "") {
        postalAddress = name + "\n" + apartmentNumber + "-";
        postalAddress += streetNumber + " " + street;
        postalAddress += "\n" + city + " " + province + "  " + postalCode;
    } else {
        postalAddress = name;
        postalAddress += "\n" + streetNumber + " " + street;
        postalAddress += "\n" + city + " " + province + "  " + postalCode;
    }
    std::transform(
        postalAddress.begin(),
        postalAddress.end(),
        postalAddress.begin(),
        ::toupper
);

    return postalAddress;
}


int main() {
    // this function gets input, calls a function, gives output

    std::string name;
    std::string question;
    std::string apartmentNumber;
    std::string streetNumber;
    std::string street;
    std::string city;
    std::string province;
    std::string postalCode;
    int apartment;
    std::string postalAddress;

    // input
    std::cout << "the postal address formater" << std::endl;
    std::cout << "Enter full name: ";
    std::getline(std::cin, name);
    std::cout << "Enter street number: ";
    std::getline(std::cin, streetNumber);
    std::cout << "Enter street name (include street/drive/ way): ";
    std::getline(std::cin, street);
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    std::cout << "Enter province (abbreviated form): ";
    std::getline(std::cin, province);
    std::cout << "Enter postal code: ";
    std::getline(std::cin, postalCode);
    std::cout << "Do you live in an apartment?(y/n): ";
    std::getline(std::cin, question);
    if (question == "y") {
        std::cout << "Enter apartment number: ";
        std::getline(std::cin, apartmentNumber);
    }

    try {
        if (apartmentNumber != "") {
            apartment = std::stoi(apartmentNumber);
        }
        // function calls
        if (apartmentNumber != "") {
            postalAddress = postalAddressFunction(
            name,
            streetNumber,
            street,
            city,
            province,
            postalCode,
            apartmentNumber);
        } else {
            postalAddress = postalAddressFunction(
            name,
            streetNumber,
            street,
            city,
            province,
            postalCode);
        }

        // output
        std::cout << "\n" << postalAddress;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
