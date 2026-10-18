// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 17,10,2026
// This program has the user input
// an integer. Depending on what integer the user inputs,
// the program will say what type of integer it is
// by comparing it to some conditions.

#include <iostream>

int main() {
    // declare variables
    int userInt;

    // get user's integer input
    std::cout <<"Input any integer: ";
    std::cin >> userInt;

    // check what type of integer the user input
    if (userInt > 0) {
        std::cout <<"This is a positive integer";
    } else if (userInt < 0) {
        std::cout <<"This is a negative integer";
    } else {
        std::cout <<"The integer is 0";
    }
}
