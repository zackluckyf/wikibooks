//
//  main.cpp
//  exercise2
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type all the integers
 between 8 and 23 (both included) using a for loop.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{
    int num;
    cout << "Enter all integers between 8-23 inclusive in order" << endl;
    for (int i = 8; i < 24; i++)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if (num != i)
        {
            i--;
        }
    }
    
    
    
    return 0;
}
