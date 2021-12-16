// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program gets the user to enter an number
// between 1 and 12 and tells them the corresponding month.
#include <iostream>

int main() {
    // declare variables
    int userNumber;

    // get user input

    std::cout << "Enter your number: ";
    std::cin >> userNumber;

    // if else statement
    if (userNumber > 12) {
        std::cout << "Number must be between 1 and 12!";
    } else if (userNumber < 1) {
        std::cout << "Number must be between 1 and 12!";
    } else if (userNumber == 1) {
        std::cout << "January";
    } else if (userNumber == 2) {
        std::cout << "February";
    } else if (userNumber == 3) {
        std::cout << "March";
    } else if (userNumber == 4) {
        std::cout << "April";
    } else if (userNumber == 5) {
        std::cout << "May";
    } else if (userNumber == 6) {
        std::cout << "June";
    } else if (userNumber == 7) {
        std::cout << "July";
    } else if (userNumber == 8) {
        std::cout << "August";
    } else if (userNumber == 9) {
        std::cout << "September";
    } else if (userNumber == 10) {
        std::cout << "October";
    } else if (userNumber == 11) {
        std::cout << "November";
    } else if (userNumber == 12) {
        std::cout << "December";
    }
}
