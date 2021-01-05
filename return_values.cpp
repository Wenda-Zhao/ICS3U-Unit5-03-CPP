// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for TC to Tf

#include <iostream>

int Conversion(std::string Level_user, int percentage) {
    // This function is for conversion

    // process
    if (Level_user == "4+") {
        percentage = 98;
    } else if (Level_user == "4") {
        percentage = 90;
    } else if (Level_user == "4-") {
        percentage = 83;
    } else if (Level_user == "3+") {
        percentage = 78;
    } else if (Level_user == "3") {
        percentage = 74;
    } else if (Level_user == "3-") {
        percentage = 71;
    } else if (Level_user == "2+") {
        percentage = 68;
    } else if (Level_user == "2") {
        percentage = 65;
    } else if (Level_user == "2-") {
        percentage = 61;
    } else if (Level_user == "1+") {
        percentage = 58;
    } else if (Level_user == "1") {
        percentage = 54;
    } else if (Level_user == "1-") {
        percentage = 51;
    } else if (Level_user == "R") {
        percentage = 20;
    }
    return percentage;
}


int main() {
    // This function is get the input

    std::string Level_user;
    int iLevel;
    int percentage = -1;

    // input
    std::cout << "Enter the level:";
    std::cin >> Level_user;

    // call function
    percentage = Conversion(Level_user, percentage);

    // output
    std::cout << "The middle percentage is: " << percentage << "%" << std::endl;
}
