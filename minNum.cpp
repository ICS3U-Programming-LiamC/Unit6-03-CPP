// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May June 10, 2021
// This program generates 10 random numbers adds them to an array
// then finds the average of these numbers

// all the libraries required to do the work
// not really cmath I just always have that one in case
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <array>

// makes the constant of max num and num of nums
const int NUM_NUMS = 10;
const int MAX_NUM = 100;
const int MIN_NUM = 0;

// smallest number finder
int Smallest(std::array<int, NUM_NUMS> arraySmall) {
    int smallest = 100;
    int each;
    // use a loop to find the smallest number
    for (int each : arraySmall) {
        if (each < smallest) {
            smallest = each;
        }
    }
    // print result to user
    std::cout << "\nThe smallest number is " << smallest;
}

// biggest number finder
int Biggest(std::array<int, NUM_NUMS> arrayBig) {
    int each;
    int largest = 0;
    // use a loop to find the biggest number
    for (int each : arrayBig) {
        if (each > largest) {
            largest = each;
        }
    }
    // print result to user
    std::cout << "\nThe largest number is " << largest;
}

// main function
int main() {
    // greets the user and describes the program
    std::cout << "Welcome! This program generates 10 random numbers and then";
    std::cout << "\nit finds the largest and smallest of these numbers\n";

    // defines some variables and sets the number
    // randomizer
    std::array<int, NUM_NUMS> arrayOfNums;
    int randomNum;
    int counter;
    srand((unsigned) time(0));

    // generates random numbers and adds them to the array
    for (counter = 0; counter < NUM_NUMS; counter++) {
        randomNum = (rand() % MAX_NUM);
        std::cout << randomNum << " ";
        arrayOfNums[counter] = randomNum;
    }

    // define some other vars
    float total = 0;
    int each;
    // call the functions to determine what the largest and smallest numbers are
    Smallest(arrayOfNums);
    Biggest(arrayOfNums);
}
