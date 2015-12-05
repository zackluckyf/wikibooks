//
//  main.cpp
//  exercise11
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type a positive integer. When the user types a negative value the 
 program writes ERROR and asks for another value. When the user types 0, that means that the last value has 
 been typed and the program must write the average of the positive integers. If the number of typed values 
 is zero the program writes 'NO AVERAGE'.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> integers;
    int input(1);
    while (input != 0)
    {
        cout << "Enter a positive integer: ";
        cin >> input;
        while (input < 0)
        {
            cout << "ERROR" << endl;
            cout << "Enter a positive integer: ";
            cin >> input;
        }
        if (input != 0)
        {
            integers.push_back(input);
        }
    }
    if (integers.size() == 0)
    {
        cout << "NO AVERAGE" << endl;
    }
    else
    {
        int total(0);
        double average;
        for (int i = 0; i < integers.size(); i++)
        {
            total += integers[i];
        }
        average = total * 1.0 / integers.size();
        cout << "The average of the positives entered is: " << average << endl;
    }
    
    
    
    
    return 0;
}
