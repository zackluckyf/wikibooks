//
//  main.cpp
//  exercise3
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type all the integers between 8 and 23 
 (both included) while using a while loop
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{
    int num(8);
    int temp;
    cout << "Enter all the integers between 8 and 23 inclusive in order" << endl;
    while (num < 24 && num > 7)
    {
        cout << "Enter a number: ";
        cin >> temp;
        if (temp != num)
        {
            num--;
        }
        num++;
    }
    return 0;
}
