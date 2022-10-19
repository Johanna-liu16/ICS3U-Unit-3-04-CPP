// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program identifies an integer

#include <iostream>

int main() {
    // this function identifies an integer
    int userInteger;

    // input
    std::cout << "This program identifies an integer." << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> userInteger;

    // process
    if (userInteger > 0) {
        // output
        std::cout << userInteger << " is a positive integer.";
    } else if (userInteger < 0) {
        // output
        std::cout << userInteger << " is a negative integer.";
    } else {
        // output
        std::cout << userInteger << " is zero.";
    }

        std::cout << std::endl;
        std::cout << "\nDone." << std::endl;
    }
