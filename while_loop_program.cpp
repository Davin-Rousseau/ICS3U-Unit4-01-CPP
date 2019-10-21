// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program uses a while loop
// To calculate the sum of consecutive numbers up to a chosen number

#include <iostream>

int main() {
    // this function calculates sum of two integers
    int number;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // process and output
    while (loopCounter < number) {
        std::cout << loopCounter << " times through loop." << std::endl;
        loopCounter = loopCounter + 1;
        answer = answer + loopCounter;
    }

    std::cout << "" << std::endl;
    std::cout << "The sum of all integers up to your entry is: "
              << answer << std::endl;
    return 0;
}
