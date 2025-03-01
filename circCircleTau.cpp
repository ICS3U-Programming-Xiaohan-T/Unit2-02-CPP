// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Date: Feb 28, 2025
// This program is created for calculating circumference of a circle
// by the radius given by users.

#include <iostream>
int main() {
    // declare the value of the constant
    const float TAU = 6.28;
    // declare all variables
    float radius, circumference;
    // get the required radius data by asking for the user's input
    std::cout << "Please enter the radius (mm): ";
    // store the data as radius
    std::cin >> radius;
    // calculate the circumference by the following equation
    circumference = TAU * radius;
    // print out the result with newline for formatting
    std::cout << "\n";
    // display the calculated result of the circumference to the user
    std::cout << "Circle's circumference = "
    << circumference << "mm" << std::endl;
}
