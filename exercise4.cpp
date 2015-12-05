//
//  main.cpp
//  exercise4
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// Write a program that asks the user to type 10 integers and writes the sum of these integers.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{
    // gets user input
    int array[10];
    cout << "Enter 10 integer values" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
    // sums the values
    int total(0);
    for (int i = 0; i < 10; i++)
    {
        total += array[i];
    }
    cout << "The total is " << total << endl;
    return 0;
}
