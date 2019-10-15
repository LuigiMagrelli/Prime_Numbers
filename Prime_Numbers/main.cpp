/****************************************
 *   main.cpp
 *   Luigi's Prime Calculator
 *
 *   Created by Luigi Magrelli on 6-10-2019
 *   Copyright © 2019 Techilepsy, LLC. All rights reserved.
 *
 *   This program should ask the user for a maximum value
 *   and calculate all of the primes from 0-maxVal
 *   Bonus points:
 *     -Styling
 *     -Efficiency
 *
 *   Things to watch out for:
 *     -Incorrect use of tabs
 *     -Incorrect loop type
 *     -Poorly named variables
 ****************************************/
// includes
#include <iostream>
#include <math.h>

// main function
int main()
{
    // DONE: Declare variables
    
    int maxVal;
    int num;
    bool prime;
    int newPrime;
    
    // DONE: output directions and take input
    
    std::cout << "Enter a number to check all prime values: ";
    std::cin >> maxVal; // <--------Value is set for maxValue
    
    // DONE: Create a loop to check if primes
    // HINT: 0 and 1 are NOT primes
    // You do not need to check the remainder of every number.
    // Think of ways to make as few iterations as possible
    
    for(num = 2; num <= maxVal; num ++){
        int iter = sqrt(num);// <---here
        prime = true;
        for(int i = 2; i <= iter; i++){
            if(num % i == 0){
                prime = false;
            }
        }
        if(prime){
            newPrime = num;
            //std::cout << num << "\n";
        }
    }
    //DONE: return and end
    
    return 0;
    
}
