//
//  main.cpp
//  exercise5
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// Write a program that asks the user to type 10 integers and writes the smallest value.


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{
    // gets user input
    cout << "Enter 10 integers." << endl;
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
    // checks for smallest value
    int min = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "The smallest integer is " << min << endl;

    return 0;
}
